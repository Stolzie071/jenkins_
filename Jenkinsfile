pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'python3 pascals.py'
            }
        }

        stage('Archive') {
            steps {
                    archiveArtifacts artifacts: 'pascals', fingerprint: true
            }
        }
    }
}
