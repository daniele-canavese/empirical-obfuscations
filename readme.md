# Empirical Assessment of the Effort Needed to Attack Programs Protected with Obfuscation

[![dani](https://img.shields.io/badge/Daniele-Canavese-E4405F?logo=linkedin)](https://www.linkedin.com/in/daniele-canavese/)
&nbsp;
[![leo](https://img.shields.io/badge/Leonardo-Regano-E4405F?logo=linkedin)](https://www.linkedin.com/in/leonardo-regano-a189b36a/)
&nbsp;
[![hald](https://img.shields.io/badge/Cataldo-Basile-E4405F?logo=linkedin)](https://www.linkedin.com/in/cataldo-basile-598505/)
&nbsp;
[![mark](https://img.shields.io/badge/Marco-Torchiano-E4405F?logo=linkedin)](https://www.linkedin.com/in/marco-torchiano-b263005/)

This repository contains the questionnaires, their results, and our analysis on
an experiment we did to empirically prove that software obfuscations slow down
the reverse engineering of attackers.

We distributed the C source code of different applications obfuscated
with [Tigress](https://tigress.wtf/) (using control flow flattening and opaque
predicates) to 152 students in the second year of the MSc in Computer
Engineering at the [Politecnico di Torino](https://www.polito.it/), one of the
most renowned technical universities in Italy. In each of these applications we
injected a simple but prominent bug and asked the students to fix during a
hackathon of sort. We timed the students and asked them to fill several
questionnaires describing their experience.

Our full discussion about the experiment procedure and its results analysis can
be found in our paper *Empirical Assessment of the Effort Needed to Attack
Programs Protected with Obfuscation*, downloadable from `DOI when available`.

## Execution

The experiment was conducted in two consecutive steps: a *remote stage*, where
the students were tasked to solve some programming tasks at home, and a *live
stage*, where the students were gathered into a controlled environment (
classrooms) and tried to crack some obfuscated applications.

### Remote stage

In this stage, the students were contacted primarily via email and asked to fill
some Google Forms to assess their programming experience and knowledge of the C
language.

In particular, we followed the next work-flow:

1. We asked the students if they wanted to participate using the questionary
   reported in [1-participation.md](execution%2F1-participation.md).
2. We gathered all the positive answers and asked the participating students
   to analyze the code [check.c](execution%2Fcheck.c) and fill the
   questionnaire [2-check.md](execution%2F2-check.md). This exercise required
   the student to compile and debug an application to extract a *hidden* value
   contained into an obfuscated variable. The goal of this step was to assess
   the ability of the students to effectively analyze a process dynamically.
3. We also sent the students the
   questionnaire [3-preliminary.md](execution%2F3-preliminary.md) to test their
   expertise and ability on the C programming language.

### Live stage

During this step, the students were gathered into classrooms and tasked to do
the following:

1. First, we asked the students to fill the
   questionnaire [4-live.md](execution%2F4-live.md) to prove their C programming
   language skills, and comparing these *under stress* results with the answers
   we got from the remote stage.
2. We asked the students to crack three differently obfuscated
   applications (`arithmetic`, `number`, and `tictactoe`) into three consecutive
   rounds with a timeout. The distributed application source codes are available
   at [5-task-1-code](execution%2F5-task-1-code), [5-task-2-code](execution%2F5-task-2-code),
   and [5-task-3-code](execution%2F5-task-3-code). After a timeout, each student
   had to fill the questionnaire [5-task.md](execution%2F5-task.md), which asked
   to describe how they cracked the application, and to upload the modified
   source code and a screenshot of the *fixed* application. To help the students
   in fill the form, we sent them also
   also [5-attack-steps.pdf](execution%2F5-attack-steps.pdf), which contains a
   list of attack steps to be used in the questionnaire.

## Responses

We used Google Form to both distribute and collect the questionnaire results. We
provide here, in the folder [responses](responses), all the student answers
in CSV format and also the submitted source code.

### Questionnaire answers

To keep the privacy of the students intact, we have removed all the personal
information (e.g., names, email addresses, university identification numbers)
and replaced them with an anonymous identifier named `id` in the CSV tables.

In particular, these are the answers to the questionnaires:

- We omit the answers to [1-participation.md](execution%2F1-participation.md)
  for privacy reasons.
- We do not include the responses to [2-check.md](execution%2F2-check.md)
  either since all the students correctly reported the hidden value.
- The answers to [3-preliminary.md](execution%2F3-preliminary.md) are available
  at [3-preliminary.csv](responses%2F3-preliminary.csv)
- The responses to [4-live.md](execution%2F4-live.md) are instead downloadable
  from [4-live.csv](responses%2F4-live.csv).
- [5-task-1.csv](responses%2F5-task-1.csv), [5-task-2.csv](responses%2F5-task-2.csv),
  and [5-task-3.csv](responses%2F5-task-3.csv) respectively contains the results
  of the questionnaire [5-task.md](execution%2F5-task.md) for the tasks 1, 2,
  and 3 executed in the classrooms.

### Submitted source code

The
folders [5-task-1-code](responses%2F5-task-1-code), [5-task-2-code](responses%2F5-task-2-code),
and [5-task-3-code](responses%2F5-task-3-code) contains the submitted modified
source code per each task.

The file names in each folder follow this schema `<application>-<id>.c`
where `<application>` is the cracked application name (`arithmetic`, `number`,
or `tictactoe`) and `<id>` is the anonymous identifier of the student.

Note that some students sent files that contains syntax errors, so not all of
them are compilable.

## Analysis

The [analysis](analysis) folder contains the files we used to perform our
analysis.

### Code metrics

The file [code-metrics.csv](analysis%2Fcode-metrics.csv) contains several
complexity metrics of the obfuscated applications distributed to the students.
We used [Frama-C](https://frama-c.com/) to compute these values.

### Cleaned responses

We took the raw student CSV responses, available at [responses](responses), and
cleaned them up by removing some unnecessary columns. In particular:

- [analysis/3-preliminary.csv](analysis%2F3-preliminary.csv) is the cleaned
  version
  of [responses/3-preliminary.csv](responses%2F3-preliminary.csv).
- [analysis/4-live.csv](analysis%2F4-live.csv) is the cleaned version
  of [responses/4-live.csv](responses%2F4-live.csv).
- [tasks.csv](analysis%2Ftasks.csv) contains the aggregated and cleaned data
  related to the three task questionnaires responses.

### Responses analysis

The file [analysis.rmd](analysis%2Fanalysis.rmd) is our R MarkDown file used to
compute the statistics explained in our paper.

## Miscellaneous

This section contains some additional miscellaneous information.

### Obfuscating `check.c`

The original vanilla code for the home test exercise `check.c` is available
at [check.c](originals%2Fcheck.c).

To generate the obfuscated version distributed to the students, we used the
following procedure:

1. We obfuscated the vanilla code with Tigress by using the following options:

   --Transform=EncodeLiterals --EncodeLiteralsKinds=string
   --EncodeLiteralsEncoderName=encoder --Functions=*
   --Transform=EncodeData --GlobalVariables='spyme'
   --Transform=EncodeArithmetic --Functions=*
   --Transform=Split --Functions=check

2. We complied [checksum.c](originals%2Fchecksum.c) and executed it to compute
   the source code checksum of the obfuscated `check.c`.
3. We updated the original vanilla source code with the obtained checksum.
4. We executed Tigress again with the same metrics.

We decided to install a checksum computation in the application to avoid the
students manipulating its source code.

### The vanilla task applications

The original vanilla source code of our three task applications are:

- [arithmetic.c](originals%2Farithmetic.c).
- [number.c](originals%2Fnumber.c).
- [tictactoe.c](originals%2Ftictactoe.c).

`arithmetic.` and `number.c` were taken from the `bsdgames` in the Debian
repositories, while `tictactoe` is an exercise from the book *C: The Complete
Reference, 4th Ed. (Paperback)* by Herbert Schildt.
