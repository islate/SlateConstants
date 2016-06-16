
Pod::Spec.new do |s|

  s.name         = "SlateConstants"
  s.version      = "3.4.2.1"
  s.summary      = "SlateConstants"


  s.description  = <<-DESC
       SlateConstants   
  
                   DESC

  s.homepage     = "https://github.com/islate/SlateConstants"
  s.license      = "Apache 2.0"
  s.author       = { "linyize" => "linyize@gmail.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/islate/SlateConstants.git", :branch => "master" }

  s.source_files = '*.{h,m}'

end
