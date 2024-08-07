// import { Badge } from "@material-ui/core";
import { Search, ShoppingCartOutlined } from "@material-ui/icons";
import React from "react";
import styled from "styled-components";
import { mobile } from "../responsive";
import { Link } from "react-router-dom";

const Container = styled.div`
  height: 60px;
  ${mobile({ height: "50px" })}
  position: fixed;
  top: 0;
  width: 100%;
  z-index: 10;
  background-color: white;
`;

const Wrapper = styled.div`
  padding: 0px 20px;
  height: 100%;
  display: flex;
  align-items: center;
  justify-content: space-between;
  ${mobile({ padding: "10px 0px" })}
`;

const Left = styled.div`
  flex: 1;
  display: flex;
  align-items: center;
`;

const Language = styled.span`
  font-size: 14px;
  cursor: pointer;
  ${mobile({ display: "none" })}
`;

const SearchContainer = styled.div`
  border: 0.5px solid lightgray;
  display: flex;
  align-items: center;
  margin-left: 25px;
  padding: 5px;
`;

const Input = styled.input`
  border: none;
  ${mobile({ width: "50px" })}
`;

const Center = styled.div`
  flex: 1;
  text-align: center;
`;

const Logo = styled.h1`
  font-weight: bold;
  ${mobile({ fontSize: "24px" })}
`;
const Right = styled.div`
  flex: 1;
  display: flex;
  align-items: center;
  justify-content: flex-end;
  ${mobile({ flex: 2, justifyContent: "center" })}
`;

const MenuItem = styled.div`
  font-size: 14px;
  cursor: pointer;
  margin-left: 25px;
  ${mobile({ fontSize: "12px", marginLeft: "10px" })}
`;

const StyledLink = styled(Link)`
  text-decoration: none;
  color: inherit;
`;

const Navbar = () => {
  const storedUsername = localStorage.getItem("username");
  return (
    <Container>
      <Wrapper>
        <Left>
          <Language>EN</Language>
          <SearchContainer>
            <Input placeholder="Search" />
            <Search style={{ color: "gray", fontSize: 16 }} />
          </SearchContainer>
        </Left>
        <Center>
          <StyledLink to="/home">
            <Logo>COSMOS.</Logo>
          </StyledLink>
        </Center>
        <Right>
          <MenuItem>Hello {storedUsername}</MenuItem>
          <StyledLink to="/">
            <MenuItem>LogOut</MenuItem>
          </StyledLink>
          <MenuItem>
            <StyledLink to="/cart">
              {/* <Badge badgeContent={4} color="primary"> */}
              <ShoppingCartOutlined />
              {/* </Badge> */}
            </StyledLink>
          </MenuItem>
        </Right>
      </Wrapper>
    </Container>
  );
};

export default Navbar;
