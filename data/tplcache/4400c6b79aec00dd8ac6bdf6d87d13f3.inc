<article class="post animated fadeInDown animation-delay-6">
                        <div class="panel panel-default">
                            <div class="panel-body">
                                <h3 class="post-title"><a href="[field:arcurl/]"class="transicion">[field:title/]</a></h3>
                                  <div class="row">
                                    <div class="col-md-4">[field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='img-responsive'><img src='{@me['litpic']}'/></a>"); [/field:array]</div>

                                    <div class="col-md-8"><a href="[field:arcurl/]"><p> [field:description/]... </p></a></div>
                                  </div>
                                </div>
                                <div class="panel-footer">
                                  <div class="row">
                                    <div class="col-lg-10 col-md-9 col-sm-4"> <i class="fa fa-clock-o"></i>[field:pubdate function="GetDateTimeMK(@me)"/]</div>
                                    <div class="col-lg-2 col-md-3 col-sm-4"> <a href="[field:arcurl/]" class="pull-right">更多</a> </div>
                                  </div>
                                </div>
                              </div>
                            </article>