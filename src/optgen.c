
/*
 * DO NOT EDIT THIS FILE BY HAND!
 *
 * All changes will be lost when file gets regenerated.
 *
 * Generated by optgen 0.5 from config file "options.conf"
 *
 * Copyright (c) 2019, Jyri J. Virkki
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include "optgen.h"
#include "main_opt.h"

// LCOV_EXCL_START

char * numstring[] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50", "X" };

// For each option, list the commands which accept it
int option_path[] = { 1, 5, 6, 7 };
int option_stats_file[] = { 1 };
int option_minsize[] = { 1, 3 };
int option_hidden[] = { 1 };
int option_buflimit[] = { 1 };
int option_one_file_system[] = { 1 };
int option_hardlink_is_unique[] = { 1, 4, 5, 6, 7 };
int option_no_thread_scan[] = { 1 };
int option_firstblocks[] = { 1 };
int option_firstblocksize[] = { 1 };
int option_blocksize[] = { 1 };
int option_fileblocksize[] = { 1 };
int option_cmp_two[] = { 1 };
int option_sort_by[] = { 1 };
int option_x_nofie[] = { 1 };
int option_cut[] = { 3, 4, 5, 6, 7 };
int option_format[] = { 3 };
int option_file[] = { 4, 8 };
int option_exclude_path[] = { 4, 5, 6, 7 };
int option_delete[] = { 9 };
int option_link[] = { 10 };
int option_hardlink[] = { 10 };
int option_hash[] = { 18 };
int option_verbose[] = { 18 };
int option_verbose_level[] = { 18 };
int option_quiet[] = { 18 };
int option_db[] = { 18 };
int option_cache[] = { 18 };
int option_help[] = { 18 };
int option_x_small_buffers[] = { 18 };
int option_x_testing[] = { 18 };
int option_log_only[] = { 18 };
int option_x_no_cache[] = { 18 };
int option_x_cache_min_size[] = { 18 };

int optgen_parse(int argc, char * argv[], int * command, char * options[])
{
  int i;
  int pos;

  *command = OPTGEN_NO_COMMAND;

  for (i = 0; i < COUNT_OPTIONS; i++) {
    options[i] = NULL;
  }

  if (argc < 2) {
    return OPTGEN_NONE;
  }

  // Check if the first argument is a recognized command
  int l = strlen(argv[1]);

  if (l == 4 && !strncmp("scan", argv[1], 4)) {
    *command = 1;
    goto OPTS;
  }
  if (l == 7 && !strncmp("refresh", argv[1], 7)) {
    *command = 2;
    goto OPTS;
  }
  if (l == 6 && !strncmp("report", argv[1], 6)) {
    *command = 3;
    goto OPTS;
  }
  if (l == 4 && !strncmp("file", argv[1], 4)) {
    *command = 4;
    goto OPTS;
  }
  if (l == 7 && !strncmp("uniques", argv[1], 7)) {
    *command = 5;
    goto OPTS;
  }
  if (l == 4 && !strncmp("dups", argv[1], 4)) {
    *command = 6;
    goto OPTS;
  }
  if (l == 2 && !strncmp("ls", argv[1], 2)) {
    *command = 7;
    goto OPTS;
  }
  if (l == 4 && !strncmp("hash", argv[1], 4)) {
    *command = 8;
    goto OPTS;
  }
  if (l == 5 && !strncmp("cache", argv[1], 5)) {
    *command = 9;
    goto OPTS;
  }
  if (l == 4 && !strncmp("rmsh", argv[1], 4)) {
    *command = 10;
    goto OPTS;
  }
  if (l == 8 && !strncmp("validate", argv[1], 8)) {
    *command = 11;
    goto OPTS;
  }
  if (l == 4 && !strncmp("help", argv[1], 4)) {
    *command = 12;
    goto OPTS;
  }
  if (l == 5 && !strncmp("usage", argv[1], 5)) {
    *command = 13;
    goto OPTS;
  }
  if (l == 3 && !strncmp("man", argv[1], 3)) {
    *command = 14;
    goto OPTS;
  }
  if (l == 7 && !strncmp("license", argv[1], 7)) {
    *command = 15;
    goto OPTS;
  }
  if (l == 7 && !strncmp("version", argv[1], 7)) {
    *command = 16;
    goto OPTS;
  }
  if (l == 7 && !strncmp("testing", argv[1], 7)) {
    *command = 17;
    goto OPTS;
  }

 OPTS:

  pos = *command == OPTGEN_NO_COMMAND ? 1 : 2;

  while (pos < argc) {
    l = strlen(argv[pos]);

    if ((l == 6 && !strncmp("--path", argv[pos], 6))||
        (l == 2 && !strncmp("-p", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --path\n");
        exit(1);
      }
      options[0] = argv[pos+1];
      pos += 2;
      // strict_options: is path allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_path) / sizeof(option_path)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_path[cc] == *command) { ok = 1; }
        if (option_path[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'path' not compatible with given command\n");
        exit(1);
      }
      // callback configured for this option
      int rv = opt_add_path(options[0], *command);
      if (rv != OPTGEN_CALLBACK_OK) {
        printf("error: problem handling option 'path'\n");
        exit(1);
      }

      continue;
    }
    if ((l == 12 && !strncmp("--stats-file", argv[pos], 12))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --stats-file\n");
        exit(1);
      }
      options[1] = argv[pos+1];
      pos += 2;
      // strict_options: is stats_file allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_stats_file) / sizeof(option_stats_file)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_stats_file[cc] == *command) { ok = 1; }
        if (option_stats_file[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'stats_file' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--minsize", argv[pos], 9))||
        (l == 2 && !strncmp("-m", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --minsize\n");
        exit(1);
      }
      options[2] = argv[pos+1];
      pos += 2;
      // strict_options: is minsize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_minsize) / sizeof(option_minsize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_minsize[cc] == *command) { ok = 1; }
        if (option_minsize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'minsize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 8 && !strncmp("--hidden", argv[pos], 8))) {
      if (options[3] == NULL) {
        options[3] = numstring[0];
      } else {
        options[3] = numstring[atoi(options[3])];
        if (!strcmp(options[3], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is hidden allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_hidden) / sizeof(option_hidden)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_hidden[cc] == *command) { ok = 1; }
        if (option_hidden[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'hidden' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--buflimit", argv[pos], 10))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --buflimit\n");
        exit(1);
      }
      options[4] = argv[pos+1];
      pos += 2;
      // strict_options: is buflimit allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_buflimit) / sizeof(option_buflimit)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_buflimit[cc] == *command) { ok = 1; }
        if (option_buflimit[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'buflimit' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 17 && !strncmp("--one-file-system", argv[pos], 17))||
        (l == 2 && !strncmp("-X", argv[pos], 2))) {
      if (options[5] == NULL) {
        options[5] = numstring[0];
      } else {
        options[5] = numstring[atoi(options[5])];
        if (!strcmp(options[5], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is one_file_system allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_one_file_system) / sizeof(option_one_file_system)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_one_file_system[cc] == *command) { ok = 1; }
        if (option_one_file_system[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'one_file_system' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 20 && !strncmp("--hardlink-is-unique", argv[pos], 20))||
        (l == 2 && !strncmp("-I", argv[pos], 2))) {
      if (options[6] == NULL) {
        options[6] = numstring[0];
      } else {
        options[6] = numstring[atoi(options[6])];
        if (!strcmp(options[6], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is hardlink_is_unique allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_hardlink_is_unique) / sizeof(option_hardlink_is_unique)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_hardlink_is_unique[cc] == *command) { ok = 1; }
        if (option_hardlink_is_unique[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'hardlink_is_unique' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 16 && !strncmp("--no-thread-scan", argv[pos], 16))) {
      if (options[7] == NULL) {
        options[7] = numstring[0];
      } else {
        options[7] = numstring[atoi(options[7])];
        if (!strcmp(options[7], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is no_thread_scan allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_no_thread_scan) / sizeof(option_no_thread_scan)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_no_thread_scan[cc] == *command) { ok = 1; }
        if (option_no_thread_scan[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'no_thread_scan' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 13 && !strncmp("--firstblocks", argv[pos], 13))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --firstblocks\n");
        exit(1);
      }
      options[8] = argv[pos+1];
      pos += 2;
      // strict_options: is firstblocks allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_firstblocks) / sizeof(option_firstblocks)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_firstblocks[cc] == *command) { ok = 1; }
        if (option_firstblocks[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'firstblocks' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 16 && !strncmp("--firstblocksize", argv[pos], 16))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --firstblocksize\n");
        exit(1);
      }
      options[9] = argv[pos+1];
      pos += 2;
      // strict_options: is firstblocksize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_firstblocksize) / sizeof(option_firstblocksize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_firstblocksize[cc] == *command) { ok = 1; }
        if (option_firstblocksize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'firstblocksize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 11 && !strncmp("--blocksize", argv[pos], 11))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --blocksize\n");
        exit(1);
      }
      options[10] = argv[pos+1];
      pos += 2;
      // strict_options: is blocksize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_blocksize) / sizeof(option_blocksize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_blocksize[cc] == *command) { ok = 1; }
        if (option_blocksize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'blocksize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 15 && !strncmp("--fileblocksize", argv[pos], 15))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --fileblocksize\n");
        exit(1);
      }
      options[11] = argv[pos+1];
      pos += 2;
      // strict_options: is fileblocksize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_fileblocksize) / sizeof(option_fileblocksize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_fileblocksize[cc] == *command) { ok = 1; }
        if (option_fileblocksize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'fileblocksize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--cmp-two", argv[pos], 9))) {
      if (options[12] == NULL) {
        options[12] = numstring[0];
      } else {
        options[12] = numstring[atoi(options[12])];
        if (!strcmp(options[12], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is cmp_two allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_cmp_two) / sizeof(option_cmp_two)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_cmp_two[cc] == *command) { ok = 1; }
        if (option_cmp_two[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'cmp_two' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--sort-by", argv[pos], 9))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --sort-by\n");
        exit(1);
      }
      options[13] = argv[pos+1];
      pos += 2;
      // strict_options: is sort_by allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_sort_by) / sizeof(option_sort_by)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_sort_by[cc] == *command) { ok = 1; }
        if (option_sort_by[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'sort_by' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--x-nofie", argv[pos], 9))) {
      if (options[14] == NULL) {
        options[14] = numstring[0];
      } else {
        options[14] = numstring[atoi(options[14])];
        if (!strcmp(options[14], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is x_nofie allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_x_nofie) / sizeof(option_x_nofie)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_x_nofie[cc] == *command) { ok = 1; }
        if (option_x_nofie[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'x_nofie' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 5 && !strncmp("--cut", argv[pos], 5))||
        (l == 2 && !strncmp("-c", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --cut\n");
        exit(1);
      }
      options[15] = argv[pos+1];
      pos += 2;
      // strict_options: is cut allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_cut) / sizeof(option_cut)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_cut[cc] == *command) { ok = 1; }
        if (option_cut[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'cut' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 8 && !strncmp("--format", argv[pos], 8))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --format\n");
        exit(1);
      }
      options[16] = argv[pos+1];
      pos += 2;
      // strict_options: is format allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_format) / sizeof(option_format)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_format[cc] == *command) { ok = 1; }
        if (option_format[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'format' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--file", argv[pos], 6))||
        (l == 2 && !strncmp("-f", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --file\n");
        exit(1);
      }
      options[17] = argv[pos+1];
      pos += 2;
      // strict_options: is file allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_file) / sizeof(option_file)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_file[cc] == *command) { ok = 1; }
        if (option_file[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'file' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 14 && !strncmp("--exclude-path", argv[pos], 14))||
        (l == 2 && !strncmp("-x", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --exclude-path\n");
        exit(1);
      }
      options[18] = argv[pos+1];
      pos += 2;
      // strict_options: is exclude_path allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_exclude_path) / sizeof(option_exclude_path)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_exclude_path[cc] == *command) { ok = 1; }
        if (option_exclude_path[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'exclude_path' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 8 && !strncmp("--delete", argv[pos], 8))||
        (l == 2 && !strncmp("-D", argv[pos], 2))) {
      if (options[19] == NULL) {
        options[19] = numstring[0];
      } else {
        options[19] = numstring[atoi(options[19])];
        if (!strcmp(options[19], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is delete allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_delete) / sizeof(option_delete)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_delete[cc] == *command) { ok = 1; }
        if (option_delete[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'delete' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--link", argv[pos], 6))||
        (l == 2 && !strncmp("-L", argv[pos], 2))) {
      if (options[20] == NULL) {
        options[20] = numstring[0];
      } else {
        options[20] = numstring[atoi(options[20])];
        if (!strcmp(options[20], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is link allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_link) / sizeof(option_link)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_link[cc] == *command) { ok = 1; }
        if (option_link[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'link' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--hardlink", argv[pos], 10))||
        (l == 2 && !strncmp("-H", argv[pos], 2))) {
      if (options[21] == NULL) {
        options[21] = numstring[0];
      } else {
        options[21] = numstring[atoi(options[21])];
        if (!strcmp(options[21], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is hardlink allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_hardlink) / sizeof(option_hardlink)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_hardlink[cc] == *command) { ok = 1; }
        if (option_hardlink[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'hardlink' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--hash", argv[pos], 6))||
        (l == 2 && !strncmp("-F", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --hash\n");
        exit(1);
      }
      options[22] = argv[pos+1];
      pos += 2;
      // strict_options: is hash allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_hash) / sizeof(option_hash)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_hash[cc] == *command) { ok = 1; }
        if (option_hash[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'hash' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--verbose", argv[pos], 9))||
        (l == 2 && !strncmp("-v", argv[pos], 2))) {
      if (options[23] == NULL) {
        options[23] = numstring[0];
      } else {
        options[23] = numstring[atoi(options[23])];
        if (!strcmp(options[23], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is verbose allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_verbose) / sizeof(option_verbose)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_verbose[cc] == *command) { ok = 1; }
        if (option_verbose[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'verbose' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 15 && !strncmp("--verbose-level", argv[pos], 15))||
        (l == 2 && !strncmp("-V", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --verbose-level\n");
        exit(1);
      }
      options[24] = argv[pos+1];
      pos += 2;
      // strict_options: is verbose_level allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_verbose_level) / sizeof(option_verbose_level)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_verbose_level[cc] == *command) { ok = 1; }
        if (option_verbose_level[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'verbose_level' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 7 && !strncmp("--quiet", argv[pos], 7))||
        (l == 2 && !strncmp("-q", argv[pos], 2))) {
      if (options[25] == NULL) {
        options[25] = numstring[0];
      } else {
        options[25] = numstring[atoi(options[25])];
        if (!strcmp(options[25], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is quiet allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_quiet) / sizeof(option_quiet)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_quiet[cc] == *command) { ok = 1; }
        if (option_quiet[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'quiet' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 4 && !strncmp("--db", argv[pos], 4))||
        (l == 2 && !strncmp("-d", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --db\n");
        exit(1);
      }
      options[26] = argv[pos+1];
      pos += 2;
      // strict_options: is db allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_db) / sizeof(option_db)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_db[cc] == *command) { ok = 1; }
        if (option_db[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'db' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 7 && !strncmp("--cache", argv[pos], 7))||
        (l == 2 && !strncmp("-C", argv[pos], 2))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --cache\n");
        exit(1);
      }
      options[27] = argv[pos+1];
      pos += 2;
      // strict_options: is cache allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_cache) / sizeof(option_cache)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_cache[cc] == *command) { ok = 1; }
        if (option_cache[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'cache' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--help", argv[pos], 6))||
        (l == 2 && !strncmp("-h", argv[pos], 2))) {
      if (options[28] == NULL) {
        options[28] = numstring[0];
      } else {
        options[28] = numstring[atoi(options[28])];
        if (!strcmp(options[28], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is help allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_help) / sizeof(option_help)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_help[cc] == *command) { ok = 1; }
        if (option_help[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'help' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 17 && !strncmp("--x-small-buffers", argv[pos], 17))) {
      if (options[29] == NULL) {
        options[29] = numstring[0];
      } else {
        options[29] = numstring[atoi(options[29])];
        if (!strcmp(options[29], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is x_small_buffers allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_x_small_buffers) / sizeof(option_x_small_buffers)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_x_small_buffers[cc] == *command) { ok = 1; }
        if (option_x_small_buffers[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'x_small_buffers' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 11 && !strncmp("--x-testing", argv[pos], 11))) {
      if (options[30] == NULL) {
        options[30] = numstring[0];
      } else {
        options[30] = numstring[atoi(options[30])];
        if (!strcmp(options[30], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is x_testing allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_x_testing) / sizeof(option_x_testing)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_x_testing[cc] == *command) { ok = 1; }
        if (option_x_testing[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'x_testing' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--log-only", argv[pos], 10))) {
      if (options[31] == NULL) {
        options[31] = numstring[0];
      } else {
        options[31] = numstring[atoi(options[31])];
        if (!strcmp(options[31], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is log_only allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_log_only) / sizeof(option_log_only)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_log_only[cc] == *command) { ok = 1; }
        if (option_log_only[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'log_only' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 12 && !strncmp("--x-no-cache", argv[pos], 12))) {
      if (options[32] == NULL) {
        options[32] = numstring[0];
      } else {
        options[32] = numstring[atoi(options[32])];
        if (!strcmp(options[32], "X")) {
          printf("error: option %s repeated too many times!\n", argv[pos]);
          exit(1);
        }
      }
      pos++;
      // strict_options: is x_no_cache allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_x_no_cache) / sizeof(option_x_no_cache)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_x_no_cache[cc] == *command) { ok = 1; }
        if (option_x_no_cache[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'x_no_cache' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 18 && !strncmp("--x-cache-min-size", argv[pos], 18))) {
      if (argv[pos+1] == NULL) {
        printf("error: no value for arg --x-cache-min-size\n");
        exit(1);
      }
      options[33] = argv[pos+1];
      pos += 2;
      // strict_options: is x_cache_min_size allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_x_cache_min_size) / sizeof(option_x_cache_min_size)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_x_cache_min_size[cc] == *command) { ok = 1; }
        if (option_x_cache_min_size[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'x_cache_min_size' not compatible with given command\n");
        exit(1);
      }
      continue;
    }

    printf("error: unknown argument: [%s]\n", argv[pos]);
    exit(1);
  }

  return OPTGEN_OK;
}

int opt_count(char * str)
{
  if (str == NULL) {
    return 0;
  } else {
    return atoi(str);
  }
}

int opt_int(char * str, int def)
{
  if (str == NULL) {
    return def;
  } else {
    return atoi(str);
  }
}

char opt_char(char * str, char def)
{
  if (str == NULL) {
    return def;
  } else {
    return str[0];
  }
}

char * opt_string(char * str, char * def)
{
  if (str == NULL) {
    return def;
  } else {
    return str;
  }
}

void opt_show_help()
{
  printf("scan      scan starting from the given path\n");
  printf("  -p --path PATH              path where scanning will start\n");
  printf("     --stats-file FILE        save stats to this file\n");
  printf("  -m --minsize SIZE           min size of files to scan\n");
  printf("     --hidden                 include hidden files and dirs in scan\n");
  printf("     --buflimit NAME          read buffer size cap\n");
  printf("  -X --one-file-system        for each path, stay in that filesystem\n");
  printf("  -I --hardlink-is-unique     ignore hard links as duplicates\n");
  printf("\n");
  printf("refresh   remove deleted files from the database\n");
  printf("\n");
  printf("report    show duplicate report from last scan\n");
  printf("  -c --cut PATHSEG      remove 'PATHSEG' from report paths\n");
  printf("  -m --minsize SIZE     min size of total duplicated space to report\n");
  printf("     --format NAME      report output format (text, csv, json)\n");
  printf("\n");
  printf("file      based on report, check for duplicates of one file\n");
  printf("  -f --file PATH              check this file\n");
  printf("  -c --cut PATHSEG            remove 'PATHSEG' from report paths\n");
  printf("  -x --exclude-path PATH      ignore duplicates under this path\n");
  printf("  -I --hardlink-is-unique     ignore hard links as duplicates\n");
  printf("\n");
  printf("uniques   based on report, look for unique files\n");
  printf("  -p --path PATH              path where scanning will start\n");
  printf("  -c --cut PATHSEG            remove 'PATHSEG' from report paths\n");
  printf("  -x --exclude-path PATH      ignore duplicates under this path\n");
  printf("  -I --hardlink-is-unique     ignore hard links as duplicates\n");
  printf("\n");
  printf("dups      based on report, look for duplicate files\n");
  printf("  -p --path PATH              path where scanning will start\n");
  printf("  -c --cut PATHSEG            remove 'PATHSEG' from report paths\n");
  printf("  -x --exclude-path PATH      ignore duplicates under this path\n");
  printf("  -I --hardlink-is-unique     ignore hard links as duplicates\n");
  printf("\n");
  printf("ls        based on report, list info about every file seen\n");
  printf("  -p --path PATH              path where scanning will start\n");
  printf("  -c --cut PATHSEG            remove 'PATHSEG' from report paths\n");
  printf("  -x --exclude-path PATH      ignore duplicates under this path\n");
  printf("  -I --hardlink-is-unique     ignore hard links as duplicates\n");
  printf("\n");
  printf("hash      just hash one file, no duplicate detection\n");
  printf("  -f --file PATH     check this file\n");
  printf("\n");
  printf("cache     operate on the hash cache\n");
  printf("\n");
  printf("rmsh      create shell script to delete all duplicates\n");
  printf("  -L --link         create symlinks for deleted files\n");
  printf("  -H --hardlink     create hard links for deleted files\n");
  printf("\n");
  printf("validate  revalidate all duplicates in db\n");
  printf("\n");
  printf("help      show brief usage info\n");
  printf("\n");
  printf("usage     show more extensive documentation\n");
  printf("\n");
  printf("man       show more extensive documentation\n");
  printf("\n");
  printf("license   show license info\n");
  printf("\n");
  printf("version   show version and exit\n");
  printf("\n");
  printf("General options:\n");
  printf("  -F --hash NAME           specify alternate hash function\n");
  printf("  -v --verbose             increase verbosity (may be repeated for more)\n");
  printf("  -V --verbose-level N     set verbosity level to N\n");
  printf("  -q --quiet               quiet, supress all output except fatal errors\n");
  printf("  -d --db PATH             path to dupd database file\n");
  printf("  -C --cache PATH          path to dupd hash cache file\n");
  printf("  -h --help                show brief usage info\n");
  printf("\n");
}
// LCOV_EXCL_STOP
