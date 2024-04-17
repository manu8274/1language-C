import React from 'react';
import ReactDOM from 'react-dom/client';
import { BrowserRouter, Routes, Route} from 'react-router-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import About from './Pages/About';
import Contact from './Pages/Contact';
import Home from './Pages/Home'
import Array from './Pages/Array'
import Table from './Pages/Table';
import Table_with_arg from './Pages/Table_with_arg';
import Welcome from './Pages/Welcome';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <BrowserRouter>
  <App />
  <Routes>
  <Route path='/' element={<Home/>} />
    <Route path='/about' element={<About/>} />
    <Route path='/contact' element={<Contact/>} />
    <Route path='/array' element={<Array/>} />
    <Route path='/table' element={<Table/>} />
    <Route path='/table_with_arg' element={<Table_with_arg/>} />
    <Route path='/Welcome' element={<Welcome user="MANASVI"/>} />
    {/* <Route path='/home' element={<Home/>} /> */}
  </Routes>
  </BrowserRouter>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();