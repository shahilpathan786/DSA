capabilities of an llm 

1 Knowledge & Reasoning

What this domain measures

This domain measures two things:
. How much factual knowledge the model learned during training.
. Whether it can connect multiple pieces of information and reason through them to reach the correct
conclusion.

What comes under it

Factual recall across different subjects:
Testing whether the model knows facts from areas such as biology, physks, chemistry, history, law, medicine,
economics, and philosophy. This is the most basic test of what the model has learned.

Multi-step logical reasoning:
Testing whether the model can combine several facts in the correct sequence. Instead of answering from a
single fact, it must follow a chain of reasoning to reach the final answer.

Why frontier labs evaluate this separately

This domain is commonly used as a proxy for answering the question:
How intelligent is this model?

It is also the capability most often discussed by the media and the general public. Frontier labs therefore need to
show that their models can match or outperform competitors on widely recognized knowledge and reasoning

Real-world relevance

This capability matters when models are used for:
. Analyzing research papers.
. Answering complex customer questions.
. Writing technically accurate documents.
. Assisting protessionais in fields such as taw, medicine, science, and finance.

2 Coding & Software Engineering

What this domain measures

This domain measures whether a model can write code that actually works.

It also tests whether the model can work inside real software engineering environments involving large
codebases, multiple files, development tools, repositories, and complex workflows.

>2 Coding & Software Engineering

What this domain measures

This domain measures whether a model can write code that actually works.

It also tests whether the model can work inside real software engineering environments involving large
codebases, multiple files, development tools, repositories, and complex workflows.

What comes under it

Function-level code generation:
Writing individual functions from natural-language instructions. The model must handle edge cases, validate
inputs, and follow the required function interface.

Real-world bug fxing in existing codebases:
Giving the model a real GitHub issue and an existing repository, then asking it to identify the root cause and
create a correct patch without breaking other parts of the software.

Imp economis

What comes under it

Function-level code generation:
Writing individual functions from natural-language instructions. The model must handle edge cases, validate
inputs, and follow the required function interface.

Real-world bug fixing in existing codebases:
Giving the model a real GitHub issue and an existing repository, then asking it to identify the root cause and
create a correct patch without breaking other parts of the software.

Multi-file, long-horizon engineering tasks:
Making changes across several files, understanding how different parts of the system depend on each other, and
performing tasks such as refactoring or adding new features.

Command-line and system administration:
Completing multi-step tasks through a terminal, such as installing packages, configuring servers, running
diagnostic commands, and combining different tools.

API and function calling:
Making correct API calls with the right parameters, handling errors, and correctly processing the returned
results.

Why frontier labs evaluate this separately

Better coding performance can directly improve developer productivity and create significant business value.

Frontier labs also compete heavily on coding benchmarks because developers are an important customer group
and a major source of revenue.

Real-world relevance

This domain matters for:
· Code generation.
. Debugging.
. Code review.
. CI/CD automation.
. Software maintenance.
. General software engineering work.

Coding evaluations often reveal some of the largest performance differences between leading models and
weaker ones.

3 Mathematics

What this domain measures

This domain measures whether a model can perform accurate symbolic and numerical reasoning.

Mathematics is especially useful for evaluation because the final answer is usually either correct or incorrect. A
response cannot succeed simply by sounding convincing.

What comes under it

Grade-school mathematics and basic arithmetic reasoning:
Solving multi-step word problems by converting natural language into mathematical expressions and carrying
out the correct sequence of calculations.

Competition-level problem solving:
Solving problems from competitions such as AIME. These problems may require creative reasoning.
combinatorics, geometry, number theory, and pattern recognition.

Undergraduate and graduate-level mathematics:
Solving advanced problems from areas such as real analysis, abstract algebra, topology, probability theory, and
differential equations. These may require long reasoning chains.

Research-level mathematical reasoning:
Solving problems close to the frontier of mathematical research, where even expert mathematicians may need
several days to arrive at a solution.

⚠ CLAUDE_CODE_AUTO_COMPACT_WINDOW="1048576" is too large, so Claude Code treats it as the 1M maximum. Set it to a size from 100k to 1M, such as 200k or 200000, or unset
  it.


  npx freellmapi launch --url http://127.0.0.1:31415
  freellmapi-649e472442143d77e6b452e6cc876d8088997a1f6eafec8e