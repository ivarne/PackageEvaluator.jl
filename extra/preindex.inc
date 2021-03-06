<!DOCTYPE html>
<!--[if lt IE 7 ]><html class="ie ie6" lang="en"> <![endif]-->
<!--[if IE 7 ]><html class="ie ie7" lang="en"> <![endif]-->
<!--[if IE 8 ]><html class="ie ie8" lang="en"> <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--><html lang="en"> <!--<![endif]-->
<head>

  <!-- Basic Page Needs -->
  <meta charset="utf-8">
  <title>Package Evaluator Results</title>

  <!-- Mobile Specific Metas -->
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">

  <!-- CSS -->
  <link rel="stylesheet" href="http://www.iaindunning.com/css/base.css">
  <link rel="stylesheet" href="http://www.iaindunning.com/css/skeleton.css">
  <link rel="stylesheet" href="http://www.iaindunning.com/css/layout.css">

  <!--[if lt IE 9]>
    <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

  <style>
  table, th, td
  {
    border: 1px solid black;
    text-align: center;
    padding: 5px;
  }
  .grn { background-color: #AAFFAA; }
  .red { background-color: #FFAAAA; }
  .using_fail { background-color: #FF2222; }
  .using_pass { background-color: #AAAAFF; }
  .full_fail  { background-color: #FFAA22; }
  .full_pass  { background-color: #22FF22; }
  .thk { border-left: 3px solid black; }

  </style>

</head>
<body>
  <div class="container">
    <div class="sixteen columns">
      <h1 class="remove-bottom" style="margin-top: 40px;">PackageEvaluator Results</h1>
      <hr />
    </div>
    <div class="sixteen columns">
      <!--<h2>List of tests run</h2>
      <h3>Package</h3>
      <ul>
      <li>Check for the existence of a REQUIRE file in the root of the package.</li>
      <li>Check that the REQUIRE file specifies a Julia version.</li>
      <li>Check that a LICENSE file exists in the root of the package, and determine type.<ul>
        <li>Will look for LICENSE, LICENSE.md, and LICENSE.txt</li></ul></li>
      <li>Checks that the package has tests that can be launched from a single file<ul>
        <li>Will look for /runtests.jl, /run_tests.jl, /test/runtests.jl, /test/run_tests.jl, or as a fallback the existence of .jl files in a /test/ folder.</li></ul></li>
      <li>Checks that the recommend test/runtests.jl file exists.</li>
      <li>Checks that the tests pass, if they exist.<ul>
        <li>Will not run tests if could not determine a "master" file e.g. runtests.jl</li></ul></li>
      <li>Checks that the tests pass without warnings (coming soon).</li>
      <li>Checks for TravisCI support.</li>
      </ul>
      <h3>Metadata</h3>
      <ul>
      <li>Checks for the existence of a url file.</li>
      <li>Checks for the existence of a DESCRIPTION.md file.<ul>
        <li>Experimental proposal, not implemented anywhere yet</li></ul></li>
      <li>Checks for the existence of a requires file for every version, and all must specify a Julia version.</li>
      </ul>-->

      <h2>Summary Table</h2>
      
      <table>
      <tr>
        <td colspan="2"><strong>Testing Key</strong></td>
      </tr>
      <tr><td class="using_fail" width="20"></td><td>Couldn't run tests, "using $pkg_name" failed</td></tr>
      <tr><td class="full_fail" width="20"></td><td>Could run tests, but they failed</td></tr>
      <tr><td class="using_pass" width="20"></td><td>Couldn't run tests, "using $pkg_name" worked</td></tr>
      <tr><td class="full_pass" width="20"></td><td>Could run tests, and they passed</td></tr>
      </table>
      <br>
      <p>Other: these are recommended but not required. "Pkg REQ" is green if the REQUIRE file in package specifies a Julia version. "META req" is green if all the requires file in METADATA specify a Julia version. "TravisCI" is green if the package has TravisCI configured.</p>

      <table>
      <tr>
        <td colspan="3"></td>  <!-- Package and Repo and License-->
        <td colspan="2" class="thk">Testing</td>  <!-- Status and Details -->
        <td colspan="3" class="thk">Other</td> <!-- REQs, travisCI -->
      </tr>
      <tr>
        <td>Package</td>
        <td>Repo</td>
        <td>License</td>

        <td class="thk">Status</td>
        <td>Details</td>

        <td class="thk">Pkg REQ</td>
        <td>META req</td>
        <td>TravisCI</td>
      </tr>



