# import face_recognition,os,sys,cv2,math
# import numpy as np

# def face_score(distance,match_threshhold=0.6):
#     rg=(1.0-match_threshhold)
#     lv=(1.0-distance)/(rg*2.0)
    
#     if(distance>match_threshhold):
#         return str(round(lv*100,2)) +"%"
#     else:
#         val=(lv+((1.0-lv)*math.pow((lv-0.5),0.2)))*100
#         return str(round(val,2))+"%"
    
# class face_recog:
#     face_location=[]
#     face_encoding=[]
#     face_names=[]
#     known_face_encoding=[]
#     known_face_names=[]
#     process_cureent_frame=True
    
#     def __init__(self):
#         self.code_faces()
    
#     def code_faces(self):
#         for img in os.listdir('faces'):
#             fc_img=face_recognition.load_image_file(f'faces/{img}')
#             fc_encoding=face_recognition.face_encodings(fc_img)[0]
#             self.known_face_encoding.append(fc_encoding)
#             self.known_face_names.append(img.split(".")[0])
#         print(self.known_face_names)
    
#     def run_recog(self):
#         video=cv2.VideoCapture(0)#0 fro webcam
#         if not video.isOpened():
#             print("NO video")
        
#         cv2.namedWindow('Face Recognition', cv2.WND_PROP_FULLSCREEN)
#         cv2.setWindowProperty('Face Recognition', cv2.WND_PROP_FULLSCREEN, cv2.WINDOW_FULLSCREEN)
        
#         while(True):
#             ret,frame=video.read()
#             if(self.process_cureent_frame):
#                 small_frame=cv2.resize(frame,(0,0),fx=0.25,fy=0.25)
#                 rgb_small_frame = np.ascontiguousarray(small_frame[:, :, ::-1])
                
#                 #to find faces
#                 self.face_location=face_recognition.face_locations(rgb_small_frame)
#                 self.face_encoding=face_recognition.face_encodings(rgb_small_frame,self.face_location)
                
#                 #recognition
#                 self.face_names=[]
#                 for fc_encoding in self.face_encoding:
#                     matches=face_recognition.compare_faces(self.known_face_encoding,fc_encoding)
#                     name='UNKOWN'
#                     confidence='UNKOWN'
                    
#                     face_distance=face_recognition.face_distance(self.known_face_encoding,fc_encoding)
#                     best_match_index=np.argmin(face_distance)
#                     if(matches[best_match_index]):
#                         name=self.known_face_names[best_match_index]
#                         confidence=face_score(face_distance[best_match_index])
#                     self.face_names.append(f'{name} ({confidence})')
                    
#             self.process_cureent_frame=not self.process_cureent_frame
#             for  (top,right,bottom,left),name in zip(self.face_location,self.face_names):
#                 top,right,bottom,left=top*4,right*4,bottom*4,left*4
                
#                 cv2.rectangle(frame,(left,top),(right,bottom),(0,0,255), 2)
#                 #2 for thickness , -1 for filling the rectangle where name if found
#                 cv2.rectangle(frame,(left,bottom-35),(right,bottom),(0,0,255), -1)
#                 cv2.putText(frame,name,(left+6,bottom-6),cv2.FONT_HERSHEY_DUPLEX , 0.8,(255,255,255),1)
#             cv2.imshow('Face  Recognition',frame)
#             if(cv2.waitKey(1)==ord('q')):
#                 break
#         video.release()
#         cv2.destroyAllWindows()




# if __name__=='__main__':
#     fr=face_recog()
#     fr.run_recog()
    
    
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
        # cv2.namedWindow('Face Recognition', cv2.WND_PROP_FULLSCREEN)
        # cv2.setWindowProperty('Face Recognition', cv2.WND_PROP_FULLSCREEN, cv2.WINDOW_FULLSCREEN)

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