import React from 'react'
import { ReactSession} from 'react-client-session'
import Home from './Home';
// import Welcome from './Welcome';
// import App from '../App';

export default function Login() {
    let u=prompt("enter username: ");
    ReactSession.set("logged",u);
  return (
    <div>
        <Home />
    </div>
  )
}
