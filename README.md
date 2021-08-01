# Agrofate

[![Website](https://img.shields.io/badge/View-Website-blue)](https://sample-project.s3-web.us-east.cloud-object-storage.appdomain.cloud/)

A basic GitHub repository example for new [Call for Code](https://developer.ibm.com/callforcode/) projects and those that join the Call for Code with The Linux Foundation deployment initiative. Not all sections or files are required. You can make this as simple or as in-depth as you need. And don't forget to [register for Call for Code 2021](https://developer.ibm.com/callforcode/get-started/)!

<!-- > If you're new to open source, please consider taking the [free "Introduction to Open Source" class](https://cognitiveclass.ai/courses/introduction-to-open-source). -->

_Read this in other languages: [English](README.md), [português](./docs/README.pt_br.md)._

## Contents

- [Submission or project name](#submission-or-project-name)
  - [Contents](#contents)
  - [Short description](#short-description)
    - [What's the problem?](#whats-the-problem)
    - [How can technology help?](#how-can-technology-help)
    - [The idea](#the-idea)
  - [Demo video](#demo-video)
  - [The architecture](#the-architecture)
  - [Long description](#long-description)
  - [Project roadmap](#project-roadmap)
  - [Getting started](#getting-started)
  - [Live demo](#live-demo)
  - [Built with](#built-with)
  - [Contributing](#contributing)
  - [Versioning](#versioning)
  - [Authors](#authors)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Short description

### What's the problem?

Part of the World Health Organization's guidance on limiting further spread of COVID-19 is to practice social distancing. As a result, schools in most affected areas are taking precautionary measures by closing their facilities. With school-aged children at home for an indeterminate amount of time, keeping them engaged, entertained, and on top of their education is important.

### How can technology help?

Schools and teachers can continue to engage with their students through virtual classrooms, and even create interactive spaces for classes. As parents face a new situation where they may need to homeschool their children, finding appropriate online resources is important as well.

### The idea

It's imperative that learning and creating can continue when educational institutions have to shift the way they teach in times of crises, such as the COVID-19 pandemic. Providing a set of open source tools, backed by IBM Cloud and Watson Services, will enable educators to more easily make content available for their students.

## Demo video

[![Watch the video](https://github.com/Call-for-Code/Liquid-Prep/blob/master/images/readme/IBM-interview-video-image.png)](https://youtu.be/vOgCOoy_Bx0)

## The architecture

![Video transcription/translation app](https://developer.ibm.com/developer/tutorials/cfc-starter-kit-speech-to-text-app-example/images/cfc-covid19-remote-education-diagram-2.png)

1. The user navigates to the site and uploads a video file.
2. Watson Speech to Text processes the audio and extracts the text.
3. Watson Translation (optionally) can translate the text to the desired language.
4. The app stores the translated text as a document within Object Storage.

## Long description

Agricultural production is directly influenced by sun, rain, wind and temperature. Thus, climate change impacts agricultural processes on the planet.

However, what not everyone realizes is that agriculture also influences temperatures on Earth.

Agriculture is responsible for consuming 70% of the world's water resources.

Talking to some family farmers in São Paulo, we’ve identified some of the most common problems of small producers:

1. The lack of a better weather forecast leaves the farmer unprepared for climate change;
2. The alteration and lack of control of soil moisture, pH and nutrients cause the harvest to generate losses;
3. Finally, ineffective planning of fertilizer and defensive application.

Thinking about these problems, we’ve created a set of innovative solutions for these family farmers.With our mobile app the producer will be able to view the:
1. detailed weather forecasting, recommendations for better decision-making;
2. and plan your crops in a personalized way.
3. In addition, through our sensory equipment, we inform important data on acidity, moisture and soil nutrients.
As a differential, in relation to competitors, we align recommendations regarding climate and soil, based on real data.

Agrofate's technical architecture uses 3 IBM technologies:
1. The Weather Company API for daily and hourly weather forecast;
2. IBM Cloud Foundry for database connection and requests;
3. and IBM Db2 for data storage across the entire environment and application.

The freemium business model is the foundation of Agrofate. This allows for a greater recurrence and decreases the barrier of market entry. We have 3 subscription plans, free, basic and premium. In the premium plan, the family farmer can purchase our equipment and have full access to the app.

We are committed to the Sustainable Development Goals.

We produce sensory equipment and mobile technologies for sustainable and more productive agriculture.

We recommend the amount of water required and the ideal time for crop irrigation, aiming at the conscious use of water resources.

We develop truly accessible solutions aimed at family farmers, the class most affected by the lack of financial resources.

Currently, the MVP is being installed and tested on a family farm located in the metropolitan region of São Paulo, Brazil.

[Agrofate, developing a more conscious future.]


[More detail is available here](./docs/DESCRIPTION.md)

## Project roadmap

The project currently does the following things.

- Feature 1
- Feature 2
- Feature 3

It's in a free tier IBM Cloud Kubernetes cluster. In the future we plan to run on Red Hat OpenShift, for example.

See below for our proposed schedule on next steps after Call for Code 2021 submission.

![Roadmap](./images/roadmap.jpg)

## Getting started

In this section you add the instructions to run your project on your local machine for development and testing purposes. You can also add instructions on how to deploy the project in production.

- [sample-react-app](./sample-react-app/)
- [sample-angular-app](./sample-angular-app/)
- [Explore other projects](https://github.com/upkarlidder/ibmhacks)

## Live demo

You can find a running system to test at [callforcode.mybluemix.net](http://callforcode.mybluemix.net/).

## Built with

- [IBM DB2 Cloud](https://cloud.ibm.com/catalog/services/db2) - The MySQL database used
- [IBM Cloud Foundry](https://cloud.ibm.com/login?redirect=%2Fcloudfoundry%2Foverview) - Connection and requests with database
- [IBM The Weather Company API](https://www.ibm.com/products/weather-company-data-packages) - The API for daily and hourly forecast weather
- [Python](https://www.python.org/) - Language programming for connect with database
- [Flutter](https://flutter.dev/) - SDK, natively compiled applications for mobile, web, and desktop from a single codebase
- Microcontroller and sensors - To detect crop ph and moisture in real time

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags).

## Authors

![Roadmap](./images/Authors_Agrofate.jpg)

<a href="https://github.com/agrofate/agrofate/tree/main/images/Authors_Agrofate.png">
  <img src="https://github.com/agrofate/agrofate/tree/main/images/Authors_Agrofate.png"/>
</a>

- **Alexandre Russi Jr.** - _Initial work_ - [LinkedIn](https://www.linkedin.com/in/alexandrerussi/)
- **Gabriel B. Cardoso** - _Initial work_ - [LinkedIn](https://www.linkedin.com/in/gabriel-barbosa-cardoso-98b479a7/)
- **Guilherme G. Guimarães** - _Initial work_ - [LinkedIn](https://www.linkedin.com/in/guilhermegguimaraes/)
- **Leonardo G. J. Gonçalez** - _Initial work_ - [LinkedIn](https://www.linkedin.com/in/leonardo-gomes-jorge-gon%C3%A7alez-4910a7141/)
- **Nathan de Moraes** - _Initial work_ - [LinkedIn](https://www.linkedin.com/in/nathan-de-moraes-aa6302143/)

## License

This project is licensed under the Apache 2 License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Based on [Billie Thompson's README template](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2).
