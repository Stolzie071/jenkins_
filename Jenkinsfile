pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Running Python Script...'
                sh 'python3 pascals.py'
            }
        }

        stage('Archive') {
            steps {
                script {
                    // Архивация созданного архива с исходным кодом
                    archiveArtifacts artifacts: 'myapp.tar.gz', fingerprint: true
                }
            }
        }
    }
}
