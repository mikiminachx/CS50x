const skills = [
  {
    title: 'Data Mining',
    competency: 5,
    category: ['Data Science', 'ML Engineering'],
  },
  {
    title: 'Docker',
    competency: 2,
    category: ['Tools', 'Data Engineering'],
  },
  {
    title: 'Numpy',
    competency: 4,
    category: ['Data Science', 'Data Engineering', 'Python', 'ML Engineering'],
  },
  {
    title: 'Numba',
    competency: 4,
    category: ['Data Science', 'Data Engineering', 'Python'],
  },
  {
    title: 'Tensorflow + Keras',
    competency: 3,
    category: ['ML Engineering', 'Python'],
  },
  {
    title: 'Jupyter',
    competency: 5,
    category: ['Data Science', 'Python'],
  },
  {
    title: 'Python',
    competency: 5,
    category: ['Languages', 'Python', 'ML Engineering'],
  },
  {
    title: 'Pytorch',
    competency: 3,
    category: ['ML Engineering', 'Python'],
  },
  {
    title: 'MATLAB',
    competency: 3,
    category: ['Languages'],
  },
  {
    title: 'R',
    competency: 5,
    category: ['Languages'],
  },
  {
    title: 'Data Visualization',
    competency: 4,
    category: ['Data Science', 'Javascript'],
  },
  {
    title: 'Pandas',
    competency: 5,
    category: ['Data Engineering', 'ML Engineering', 'Python'],
  },
  {
    title: 'Matplotlib',
    competency: 4,
    category: ['Data Engineering', 'ML Engineering', 'Python'],
  },
  {
    title: 'Scikit-Learn',
    competency: 4,
    category: ['Data Engineering', 'ML Engineering', 'Python'],
  },
  {
    title: 'statsmodels',
    competency: 4,
    category: ['Data Science', 'Python', 'ML Engineering'],
  },
  {
    title: 'Seaborn',
    competency: 4,
    category: ['Data Science', 'Python', 'ML Engineering'],
  },
  {
    title: 'Shell Script',
    competency: 5,
    category: ['Tools', 'Languages'],
  },
  {
    title: 'Bash',
    competency: 4,
    category: ['Tools', 'Languages'],
  },
  {
    title: 'Data Modelling',
    competency: 4,
    category: ['Data Science', 'ML Engineering'],
  },
  {
    title: 'Data Processing',
    competency: 4,
    category: ['Data Science', 'ML Engineering'],
  },
  {
    title: 'FreeSurfer',
    competency: 2,
    category: ['Neuroimgaing'],
  },
  {
    title: 'FSL',
    competency: 2,
    category: ['Neuroimgaing'],
  },
  {
    title: 'ANTs',
    competency: 2,
    category: ['Neuroimgaing'],
  },
  {
    title: 'SPM',
    competency: 2,
    category: ['Neuroimgaing'],
  },
  {
    title: 'AFNI',
    competency: 2,
    category: ['Neuroimgaing'],
  },
  {
    title: 'NiPype',
    competency: 2,
    category: ['Tools', 'Neuroimgaing'],
  },
  {
    title: 'NIPY',
    competency: 2,
    category: ['Tools', 'Neuroimgaing'],
  },
  {
    title: 'Javascript',
    competency: 1,
    category: ['Web Development', 'Languages', 'Javascript'],
  },
  {
    title: 'SQL',
    competency: 4,
    category: ['Data Science', 'Languages', 'Database Query', 'Database Management'],
  },
].map((skill) => ({ ...skill, category: skill.category.sort() }));

// this is a list of colors that I like. The length should be === to the
// number of categories. Re-arrange this list until you find a pattern you like.
const colors = [
  '#6968b3',
  '#37b1f5',
  '#40494e',
  '#515dd4',
  '#e47272',
  '#cc7b94',
  '#3896e2',
  '#c3423f',
  '#d75858',
  '#747fff',
  '#64cb7b',
];

const categories = [
  ...new Set(skills.flatMap(({ category }) => category)),
].sort().map((category, index) => ({
  name: category,
  color: colors[index],
}));

export { categories, skills };
