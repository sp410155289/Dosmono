#
#  Be sure to run `pod spec lint SPTestThirdSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|


  spec.name         = "Dosmono"
  spec.version      = "1.0.23"
  spec.summary      = "Dosmono"
  spec.description  = <<-DESC
  大圣魔脑SDK
                   DESC

  spec.homepage     = "https://github.com/sp410155289/Dosmono"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  spec.license      = { :type => "MIT", :file => "LICENSE" }


  spec.author             = { "SunPeng" => "410155289@qq.com" }
  # Or just: spec.author    = "sunpeng"
  # spec.authors            = { "sunpeng" => "410155289@qq.com" }
  # spec.social_media_url   = "https://twitter.com/sunpeng"

  spec.platform     = :ios
  # spec.platform     = :ios, "5.0"

  spec.ios.deployment_target = "10.0"



  spec.source       = { :git => "https://github.com/sp410155289/Dosmono.git", :tag => "#{spec.version}" }

  spec.source_files  = 'Dosmono.framework/Headers/*.{h}'
  spec.exclude_files = "Classes/Exclude"
  spec.ios.vendored_frameworks = 'Dosmono.framework'
  spec.dependency 'YYModel'
  spec.dependency 'SocketRocket'
  spec.dependency 'FreeStreamer'
  spec.dependency 'FMDB'
  spec.requires_arc = true
  spec.frameworks = "UIKit", "Foundation", "CoreGraphics", "QuartzCore", "SystemConfiguration", "Contacts", "AudioToolbox", "AVFoundation", "CoreTelephony", "CoreLocation"
  spec.libraries = "c++", "z"

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  valid_archs = ["armv7s","arm64","armv7","arm64e"]
  # spec.public_header_files = 'Headers/*.h'

  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # spec.framework  = "SomeFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"

  # spec.requires_arc = true

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

end
