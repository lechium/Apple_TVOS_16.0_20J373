//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoFeatureListStringHelper : NSObject
{
}

+ (id)newFeatureListStringsDictForGroupID:(unsigned int)arg1 isOneToOne:(_Bool)arg2;	// IMP=0x00800000003711b1
+ (id)newScreenFeatureString;	// IMP=0x0080000000371161
+ (_Bool)featureListString:(char *)arg1 maxSize:(long long)arg2 payload:(int)arg3 featureListStrings:(struct __CFDictionary *)arg4;	// IMP=0x0080000000370f5a
+ (int)defaultPayload:(struct __CFDictionary *)arg1;	// IMP=0x0080000000370de8
+ (_Bool)extractExpectedAspectRatios:(const char *)arg1 expectedLandscapeX:(int *)arg2 expectedLandscapeY:(int *)arg3 expectedPortraitX:(int *)arg4 expectedPortraitY:(int *)arg5;	// IMP=0x0080000000370db6
+ (_Bool)extractAspectRatios:(const char *)arg1 landscapeX:(int *)arg2 landscapeY:(int *)arg3 portraitX:(int *)arg4 portraitY:(int *)arg5;	// IMP=0x0080000000370d84
+ (_Bool)extractAspectRatios:(const char *)arg1 prefix:(const char *)arg2 landscapeX:(int *)arg3 landscapeY:(int *)arg4 portraitX:(int *)arg5 portraitY:(int *)arg6;	// IMP=0x0080000000370c29
+ (id)newEmptyFeatureString;	// IMP=0x0080000000370c01
+ (id)newEmptyFeatureStringWithPayload:(int)arg1;	// IMP=0x0080000000370b7d
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1 aspectRatioFLS:(id)arg2;	// IMP=0x0080000000370a65
+ (id)newLocalFeaturesStringWithType:(unsigned char)arg1;	// IMP=0x0080000000370a24
+ (_Bool)findFeatureString:(const char *)arg1 value:(char *)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char *)arg4;	// IMP=0x00800000003708ef
+ (id)deriveAspectRatioFLSWithPortraitRatio:(struct CGSize)arg1 landscapeRatio:(struct CGSize)arg2 expectedPortraitRatio:(struct CGSize)arg3 expectedLandscapeRatio:(struct CGSize)arg4;	// IMP=0x00800000003707b0
+ (id)deriveAspectRatioFLS;	// IMP=0x00800000003706ca
+ (void)aspectRatioPortrait:(struct CGSize *)arg1 landscape:(struct CGSize *)arg2 isMismatchedOrientation:(_Bool)arg3;	// IMP=0x0080000000370623
+ (void)fixInvalidAspectRatioPortrait:(struct CGSize *)arg1 landscape:(struct CGSize *)arg2;	// IMP=0x00800000003705c3
+ (id)retrieveRawFeaturesStringWithType:(unsigned char)arg1;	// IMP=0x00800000003705aa

@end

