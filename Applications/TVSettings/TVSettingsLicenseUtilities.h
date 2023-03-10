//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSettingsLicenseUtilities : NSObject
{
}

+ (id)acknowledgementsPath;	// IMP=0x00400000000877a0
+ (id)legalSafetyText;	// IMP=0x001000000008778f
+ (id)iTunesTermsText;	// IMP=0x0010000000087720
+ (id)iCloudTermsText;	// IMP=0x00100000000876e5
+ (id)gameCenterTermsText;	// IMP=0x00100000000876aa
+ (id)warrantyText;	// IMP=0x001000000008766f
+ (id)softwareLicenseText;	// IMP=0x0010000000087634
+ (void)initialize;	// IMP=0x00100000000875c6
+ (void)_downloadTerms;	// IMP=0x00100000000873d5
+ (void)_getBuiltinTerms;	// IMP=0x001000000008725d
+ (void)_decodeTermsData:(id)arg1;	// IMP=0x0010000000086fdf
+ (id)_termsRequest;	// IMP=0x0010000000086d12

@end

