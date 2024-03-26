/**
 * @typedef {Object} Position
 * Conforms to https://jsonresume.org/schema/
 *
 * @property {string} name - Name of the company
 * @property {string} position - Position title
 * @property {string} url - Company website
 * @property {string} startDate - Start date of the position in YYYY-MM-DD format
 * @property {string|undefined} endDate - End date of the position in YYYY-MM-DD format.
 * If undefined, the position is still active.
 * @property {string|undefined} summary - html/markdown summary of the position
 * @property {string[]} highlights - plain text highlights of the position (bulleted list)
 */
const work = [
  {
    name: 'iNFOWARE System Limited',
    position: 'Application Support Engineer',
    url: 'https://www.infoware.com.hk/index.html',
    startDate: '2024-01-15',
    summary: `Providing daily operation and technical support on Retail/CRM applications & databases. Moreover, it is essential to install, configure, and regular update software application and database. 
    It is also required to interact with end-users directly for problem identification and resolution. Working closely with Development Team for project support is also in the job duties.`,

    highlights: [
      'Deploy & support Omni-Channel Retail/CRM Software.',
      'Provide support to Hong Kong & Asia Clients.',
      'Provide support to Development Team for different projects',
      'Knowledge in using SQL for data management on Microsoft SQL Server is required.',
      'Basic knowledge in software development, configuration, and updating is essential.',
    ],
  },
  {
    name: 'School of Journalism and Communication, The Chinese University of Hong Kong',
    position: 'Research Assistant (Part-Time)',
    url: 'https://www.com.cuhk.edu.hk/',
    startDate: '2024-02-01',
    summary: `Assisting Dr. Terri Chan with a neuromarketing project. The main duties of the job are reviewing literature, looking for direction to set up a topic, and designing experiments.`
  },
  {
    name: 'Research Centre for Language, Cognition, and Neuroscience, The Hong Kong Polytechnic University',
    position: 'Research Assistant',
    url: 'https://www.polyu.edu.hk/cbs/rclcn/',
    startDate: '2023-01-08',
    endDate: '2023-12-28',
    summary: `Assisting Professor William Shi-Yuan Wang and Dr. Manson Fong with the project 
    “Quantification of Brain Age by Functional MRI Data: Complexity and Functional Connectivity” and different bilingual studies projects. 
    The main duties of the job are designing experiments, data analysis and MRI data analysis. 
    The advanced knowledge of Python and Linux is learnt from the project.`,
    highlights: [
      'Conducting experiments on young and elder participants.',
      'MRI preprocessing and data analysis.',
    ],
  },
  {
    name: 'Department of Psychiatry, University of Hong Kong',
    position: 'Research Assistant',
    url: 'https://www.psychiatry.hku.hk/',
    startDate: '2022-09-19',
    endDate: '2022-12-18',
    summary: `Assisting Dr. Sherry Chan with the different projects on patients with Schizophrenia. 
    Clinical assessments, cognitive tests, and interviews are given to the patients. Data management, data analysis, and MRI preprocessing are the key tasks of the job.`,
    highlights: [
      'Conducting experiments and clinical assessments on patients with Schizophrenia',
      'Data analysis using R, such as, Propensity Score, Survival Analysis, and Cox Regression.',
      'MRI preprocessing.',
    ],
  },
  {
    name: 'Visual Experience Laboratory, University of Birmingham',
    position: 'Volunteer Research Assistant',
    url: 'https://www.birmingham.ac.uk/research/centre-for-human-brain-health/labs-groups-networks/labs-groups-networks.aspx',
    startDate: '2019-03-01',
    endDate: '2019-11-01',
    summary: `Assisting Dr. Sara Assecondi with the EEG correlates cognitive training project. 
    Conducting experiments, Participants recruitment and data analysis with Python are the key tasks of the volunteer.`,
  },
  {
    name: 'Sleep Research Clinic and Laboratory, The University of Hong Kong',
    position: 'Research Internship',
    url: 'https://sleep.hku.hk/',
    startDate: '2019-07-01',
    endDate: '2019-08-01',
    summary: `Assisting Dr. Shirley Li with the Sleep Deprivation Study, Insomnia and Depression Treatment Study, School-based Napping Study, 
    Sleep Disturbances in ADHD and Sleep Duration Variability and Cognitive Function. Conducting experiments, 
    data collecting, data entry and participants recruitment are the key tasks of the internship.`,
  },
];

export default work;
