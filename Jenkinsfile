pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    docker.image('gcc').inside {
                        sh 'g++ -o pascals pascals.cpp'
                    }
                }
            }
        }

        stage('Archive') {
            steps {
                archiveArtifacts artifacts: 'pascals', fingerprint: true
            }
        }
    }
}
