//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFormatter, NSString, PBSAirPlaySettings, TSKMappingFormatter;

@interface TVSettingsAirPlayFacade : NSObject
{
    PBSAirPlaySettings *_settings;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000005628
+ (id)keyPathsForValuesAffectingLocalizedAllowAccessShortDescription;	// IMP=0x00100000000055fc
+ (id)keyPathsForValuesAffectingRequireCodeEveryTime;	// IMP=0x00100000000055d0
+ (id)keyPathsForValuesAffectingSecurityMode;	// IMP=0x00100000000055a4
+ (id)keyPathsForValuesAffectingAccessMode;	// IMP=0x0010000000005578
- (void).cxx_destruct;	// IMP=0x002000000000641e
@property(readonly, nonatomic) PBSAirPlaySettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSFormatter *roomNameFormatter;
@property(readonly, nonatomic) NSString *localizedAllowAccessShortDescription;
@property(nonatomic, getter=isEveryTimeCodeRequired) _Bool everyTimeCodeRequired;
@property(readonly, copy, nonatomic) NSArray *availableSecurityModes;
@property(nonatomic) unsigned long long securityMode;
@property(readonly, nonatomic) TSKMappingFormatter *accessDescriptionFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *accessValueFormatter;
@property(readonly, nonatomic) TSKMappingFormatter *securityDescriptionFormatter;
@property(readonly, copy, nonatomic) NSArray *availableAccessModes;
@property(nonatomic) unsigned long long accessMode;

@end
