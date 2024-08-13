#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Maximum number of processes: $pid_max"