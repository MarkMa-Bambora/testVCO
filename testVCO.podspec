Pod::Spec.new do |spec|
  spec.name             = "testVCO"
  spec.version          = "1.1.5"
  spec.summary          = "I am Mark"
  build_tag             = spec.version
  spec.homepage         = "http://bambora.com/en/au"
  spec.license          = 'MIT'
  spec.author           = { "testVCO" => "mark.ma@bambora.com" }
  spec.source           = {
                          :git => "https://github.com/MarkMa-Bambora/testVCO.git",
                          :tag => build_tag.to_s
                          }
  spec.platform         = :ios, '8.0'
  spec.requires_arc     = true
  spec.vendored_frameworks = 'VisaCheckoutHybrid.framework'
  spec.source_files     = 'VCO/*.{h,m}'
end