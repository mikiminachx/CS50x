import React from 'react';
import { Link } from 'react-router-dom';

import ContactIcons from '../Contact/ContactIcons';

const { PUBLIC_URL } = process.env; // set automatically from package.json:homepage

const SideBar = () => (
  <section id="sidebar">
    <section id="intro">
      <Link to="/" className="logo">
        <img src={`${PUBLIC_URL}/images/me.jpg`} alt="" />
      </Link>
      <header>
        <h2>Yin Ting, Lau</h2>
        <p><a href="mailto:mekolauyt@gmail.com">mekolauyt@gmail.com</a></p>
      </header>
    </section>

    <section className="blurb">
      <h2>About</h2>
      <p>Hi. I am a <a href="https://www.birmingham.ac.uk/university/colleges/les/les-virtual-open-days/human-neuroscience.aspx">Human Neuroscience</a> graduate at the University of Birmingham, an Application Support Engineer at <a href="https://www.infoware.com.hk/index.html">iNFOWARE</a>, part-time research assistant at the <a href='https://www.com.cuhk.edu.hk/'>CUHK</a> and a nerd. Previously, I worked as a research assistant at the <a href="https://www.psychiatry.hku.hk/">Department of Psychiatry</a> at HKU and <a href="https://www.polyu.edu.hk/cbs/rclcn/">PolyU</a>.
      </p>
      <ul className="actions">
        <li>
          {!window.location.pathname.includes('/resume') ? <Link to="/resume" className="button">Learn More</Link> : <Link to="/about" className="button">About Me</Link>}
        </li>
      </ul>
    </section>

    <section id="footer">
      <ContactIcons />
      <p className="copyright">&copy; Meko Lau <Link to="/">mekolau.com</Link>.</p>
    </section>
  </section>
);

export default SideBar;
