import React from 'react'
import {Link} from 'react-router-dom';
import { ReactSession} from 'react-client-session'
import { NavLink } from 'react-router-dom';
import './Nav.css'

// a->reload everytime
// link->only one time reload and download all
// Navlink ->shows also which tab you r on 

export default function Nav() {
  var user =  ReactSession.get("logged");
  console.log("hello",user);
  return (
    <div>
      <nav className='main-nav'>
        <NavLink to='/'>Home</NavLink><br></br>
        <NavLink to='/About'>ABOUT</NavLink><br></br>
        <NavLink to='/Contact'>CONTACT</NavLink><br></br>
        <NavLink to='/Array'>ARRAY</NavLink><br></br>
        <NavLink to='/Table_with_arg'>TABLE WITH ARGUMENT 7</NavLink><br></br>
        <NavLink to='/Table'>TABLE</NavLink><br></br>
        <NavLink to='/Welcome'>WELCOME</NavLink><br></br>
        {
          user?(<><NavLink to='/Logout'>Logout</NavLink><br></br></>):(<><NavLink to='/Login'>Login</NavLink><br></br></>)
        }
        <NavLink to='/Toggle'>TOGGLE</NavLink><br></br>
        <NavLink to='/Counter'>COUNTER</NavLink><br></br>
        <NavLink to='/Arrayhide'>Arrayhide</NavLink><br></br>
      </nav>
    </div>
  )
}
