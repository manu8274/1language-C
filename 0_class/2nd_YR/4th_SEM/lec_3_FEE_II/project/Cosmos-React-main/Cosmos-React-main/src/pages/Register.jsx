import styled from "styled-components";
import { mobile } from "../responsive";
import { useState } from "react";
import { Link } from "react-router-dom";
import { useNavigate } from "react-router-dom";

const Container = styled.div`
  bg-color: pink;
  width: 100vw;
  height: 100vh;
  background: linear-gradient(
      rgba(255, 255, 255, 0.5),
      rgba(255, 255, 255, 0.5)
    ),
    url("https://images.pexels.com/photos/6984661/pexels-photo-6984661.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=650&w=940")
      center;
  background-size: cover;
  display: flex;
  align-items: center;
  justify-content: center;
`;

const Wrapper = styled.div`
  width: 40%;
  padding: 20px;
  background-color: white;
  ${mobile({ width: "75%" })}
`;

const Title = styled.h1`
  font-size: 24px;
  font-weight: 300;
`;

const Form = styled.form`
  display: flex;
  flex-wrap: wrap;
`;

const Input = styled.input`
  flex: 1;
  min-width: 40%;
  margin: 20px 10px 0px 0px;
  padding: 10px;
`;

const Agreement = styled.span`
  font-size: 12px;
  margin: 20px 0px;
`;

const Button = styled.button`
  width: 40%;
  border: none;
  padding: 15px 20px;
  background-color: teal;
  color: white;
  cursor: pointer;
`;

const Register = () => {
  const [name, setName] = useState("");
  const [username, setUsername] = useState("");
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [confirmPassword, setConfirmPassword] = useState("");

  let navigate = useNavigate(); 
  const routeChange = () =>{ 
    let path = `/home`; 
    navigate(path);
  }

  const clicked = () => {
    if (username && email && password && confirmPassword) {
      localStorage.setItem("username", username);
      routeChange();
    } else {
      alert("Please fill in all required fields");
    }
  };

  const handleInputChange = (e) => {
    const { name, value } = e.target;
    if (name === "name") setName(value);
    if (name === "username") setUsername(value);
    if (name === "email") setEmail(value);
    if (name === "password") setPassword(value);
    if (name === "confirmPassword") setConfirmPassword(value);
  };

  return (
    <Container>
      <Wrapper>
        <Title>CREATE AN ACCOUNT</Title>
        <Form>
          <Input
            placeholder="name"
            name="name"
            value={name}
            onChange={handleInputChange}
            required
          />

          <Input placeholder="last name" />
          <Input
            placeholder="username"
            name="username"
            value={username}
            onChange={handleInputChange}
            required
          />
          <Input
            placeholder="email"
            type="email"
            name="email"
            value={email}
            onChange={handleInputChange}
            required
          />
          <Input
            placeholder="password"
            type="password"
            name="password"
            value={password}
            onChange={handleInputChange}
            required
          />
          <Input
            placeholder="confirm password"
            type="password"
            name="confirmPassword"
            value={confirmPassword}
            onChange={handleInputChange}
            required
          />
          <Agreement>
            By creating an account, I consent to the processing of my personal
            data in accordance with the <b>PRIVACY POLICY</b>
          </Agreement>
          <Button onClick={clicked}>CREATE</Button>
        </Form>
      </Wrapper>
    </Container>
  );
};

export default Register;
