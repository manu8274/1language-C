import React from 'react'
import {Link} from 'react-router-dom';
import { ReactSession} from 'react-client-session'

export default function Nav() {
  let u =  ReactSession.get("logged_user");
  return (
    <div>
      <nav className='main-nav'>
        <Link to='/'>Home</Link><br></br>
        <Link to='/About'>ABOUT</Link><br></br>
        <Link to='/Contact'>CONTACT</Link><br></br>
        <Link to='/Array'>ARRAY</Link><br></br>
        <Link to='/Table_with_arg'>TABLE WITH ARGUMENT 7</Link><br></br>
        <Link to='/Table'>TABLE</Link><br></br>
        <Link to='/Welcome'>WELCOME</Link><br></br>
        <Link to='/Logout'>Logout</Link><br></br>
        <Link to='/Login'>Login</Link><br></br>
        {
          u?(<><Link to='/Logout'>Logout</Link><br></br></>):(<><Link to='/Login'>Login</Link><br></br></>)
        }
      </nav>
    </div>
  )
}
