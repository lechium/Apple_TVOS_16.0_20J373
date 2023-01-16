//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration, MISSING_TYPE, NSString;

@interface XCTDDisplayConfiguration : NSObject
{
    unsigned int _displayID;	// 8 = 0x8
    FBSDisplayConfiguration *_configuration;	// 16 = 0x10
}

+ (MISSING_TYPE *)configurationForDisplayID:error: /* Error: Ran out of types for this method. */;	// IMP=0x002000000003cb0f
+ (id)sharedDisplayMonitor;	// IMP=0x001000000003caba
- (void).cxx_destruct;	// IMP=0x002000000003d38c
@property(readonly, nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) _Bool isMainDisplay;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy, nonatomic) NSString *hardwareIdentifier;
@property(readonly) FBSDisplayConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)initWithDisplayID:(unsigned int)arg1;	// IMP=0x001000000003cb3c

@end
