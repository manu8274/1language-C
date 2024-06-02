import face_recognition
import os
import cv2
import math
import numpy as np

def face_score(distance, match_threshold=0.6):
    range_val = 1.0 - match_threshold
    level = (1.0 - distance) / (range_val * 2.0)
    
    if distance > match_threshold:
        return f"{round(level * 100, 2)}%"
    else:
        val = (level + ((1.0 - level) * math.pow((level - 0.5), 0.2))) * 100
        return f"{round(val, 2)}%"

class FaceRecog:
    def __init__(self):
        self.face_locations = []
        self.face_encodings = []
        self.face_names = []
        self.known_face_encodings = []
        self.known_face_names = []
        self.process_current_frame = True
        self.load_known_faces()

    def load_known_faces(self):
        for img_file in os.listdir('faces'):
            face_image = face_recognition.load_image_file(f'faces/{img_file}')
            face_encoding = face_recognition.face_encodings(face_image)[0]
            self.known_face_encodings.append(face_encoding)
            self.known_face_names.append(os.path.splitext(img_file)[0])
        print("Known faces:", self.known_face_names)

    def run_recognition(self):
        video_capture = cv2.VideoCapture(0)  # 0 for webcam
        if not video_capture.isOpened():
            print("Cannot open video source")
            return

        # Create a named window and set it to full screen
        cv2.namedWindow('Face Recognition', cv2.WND_PROP_FULLSCREEN)
        cv2.setWindowProperty('Face Recognition', cv2.WND_PROP_FULLSCREEN, cv2.WINDOW_FULLSCREEN)

        while True:
            ret, frame = video_capture.read()
            if not ret:
                print("Failed to capture frame")
                break 

            if self.process_current_frame:
                small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
                rgb_small_frame = np.ascontiguousarray(small_frame[:, :, ::-1])

                # Find faces
                self.face_locations = face_recognition.face_locations(rgb_small_frame)
                self.face_encodings = face_recognition.face_encodings(rgb_small_frame, self.face_locations)

                # Recognition
                self.face_names = []
                for face_encoding in self.face_encodings:
                    matches = face_recognition.compare_faces(self.known_face_encodings, face_encoding)
                    name = 'UNKNOWN'
                    confidence = 'UNKNOWN'

                    face_distances = face_recognition.face_distance(self.known_face_encodings, face_encoding)
                    best_match_index = np.argmin(face_distances)
                    if matches[best_match_index]:
                        name = self.known_face_names[best_match_index]
                        confidence = face_score(face_distances[best_match_index])
                    self.face_names.append(f'{name} ({confidence})')

            self.process_current_frame = not self.process_current_frame

            for (top, right, bottom, left), name in zip(self.face_locations, self.face_names):
                top, right, bottom, left = top * 4, right * 4, bottom * 4, left * 4

                # Draw rectangle around face
                cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
                # Draw label with name below face
                cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), -1)
                cv2.putText(frame, name, (left + 6, bottom - 6), cv2.FONT_HERSHEY_DUPLEX, 0.8, (255, 255, 255), 1)

            cv2.imshow('Face Recognition', frame)
            if cv2.waitKey(1) == ord('q'):
                break

        video_capture.release()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    fr = FaceRecog()
    fr.run_recognition()
