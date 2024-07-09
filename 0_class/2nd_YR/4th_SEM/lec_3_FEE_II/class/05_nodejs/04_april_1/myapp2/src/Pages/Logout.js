import React from 'react'
import { ReactSession} from 'react-client-session'

export default function Logout() {
    ReactSession.set("logged_user",'');
  return (
    <div>
      <h2>YOU ARE SUCCESSFULLY LOGGED OUT</h2>
    </div>
  )
}
