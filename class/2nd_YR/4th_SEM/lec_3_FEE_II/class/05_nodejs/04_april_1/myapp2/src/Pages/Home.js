import React from 'react'
import { ReactSession} from 'react-client-session'
// import Home from './Home';
// import Welcome from './Welcome';
// import App from '../App';
import Nav from './Nav';

export default function Home() {
  let u = ReactSession.get("logged_user");
  return (
    <div>
        {u ? (<><h3>Welcome {u}</h3><h2>HOME PAGE!</h2></>)
        :(<><h2>HOME PAGE!</h2></>)}
    </div>
  )
}
