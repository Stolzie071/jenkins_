pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    // Создание докер-контейнера
                    docker.image('gcc').inside {
                        // Компиляция проекта
                        sh 'g++ -o pascals pascals.cpp'
                    }
                }
            }
        }

        stage('Archive') {
            steps {
                // Архивация бинарника как артефакта
                archiveArtifacts artifacts: 'pascals', fingerprint: true
            }
        }
    }
}
