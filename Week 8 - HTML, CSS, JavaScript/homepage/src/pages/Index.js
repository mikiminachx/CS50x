import React from 'react';
import { Link } from 'react-router-dom';

import Main from '../layouts/Main';

const Index = () => (
  <Main
    description={"Yin Ting (Meko) Lau's personal website. Hong Kong based Birmingham Neuroscience graduate, "
    + 'Application Support Engineer at iNFOWARE, current research assistant at CUHK, and former research assistant at HKU and PolyU.'}
  >
    <article className="post" id="index">
      <header>
        <div className="title">
          <h2><Link to="/">About me</Link></h2>
          <p>
            Received my bachelor&apos;s degree in Human Neuroscience
            from the University of Birmingham.<br />
            An aspiring Computational Neuroscientist.
            Visit my <a href="https://github.com/mikiminachx">GitHub page</a>.
          </p>
        </div>
      </header>
      <p> Welcome to my website. Please feel free to read more <Link to="/about">about me</Link>,
        or you can check out my {' '}
        <Link to="/resume">resume</Link>, {' '}
        <Link to="/projects">projects</Link>, {' '}
        view <Link to="/stats">site statistics</Link>, {' '}
        or <Link to="/contact">contact</Link> me.
      </p>
    </article>
  </Main>
);

export default Index;
