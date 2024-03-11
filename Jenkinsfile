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
                script {
                    // Архивация созданного архива с исходным кодом
                    archiveArtifacts artifacts: 'pascals', fingerprint: true
                }
            }
        }
    }
}
