//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDigitizerTouchStreamAggregate, BKTouchDestination, BSProcessDeathWatcher, NSString;

@interface BKDigitizerTouchStreamClient : NSObject
{
    unsigned char _touchStreamIdentifier;	// 8 = 0x8
    _Bool _shouldSendAmbiguityRecommendations;	// 9 = 0x9
    unsigned char _dispatchMode;	// 10 = 0xa
    unsigned char _ambiguityRecommendation;	// 11 = 0xb
    _Bool _valid;	// 12 = 0xc
    unsigned int _reference;	// 16 = 0x10
    double _creationTime;	// 24 = 0x18
    BKDigitizerTouchStreamAggregate *_parent;	// 32 = 0x20
    long long _versionedPID;	// 40 = 0x28
    BKTouchDestination *_touchDestination;	// 48 = 0x30
    BSProcessDeathWatcher *_processDeathWatcher;	// 56 = 0x38
    NSString *_processName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000681be
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000068165
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000067fc0
- (id)init;	// IMP=0x0010000000067f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

