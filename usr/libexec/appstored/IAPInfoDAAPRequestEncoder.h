//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IAPInfoDAAPRequestEncoder : NSObject
{
    NSArray *_knownIAPs;	// 8 = 0x8
    NSNumber *_revision;	// 16 = 0x10
}

+ (id)_requiredFields;	// IMP=0x0020000000103c36
+ (id)_dataForRequestWithKnownIAPs:(id)arg1 revision:(unsigned int)arg2;	// IMP=0x001000000010376e
- (void).cxx_destruct;	// IMP=0x0020000000103d75
- (id)dataForRequestWithError:(id *)arg1;	// IMP=0x001000000010372b
- (id)initWithKnownIAPs:(id)arg1 currentRevision:(id)arg2;	// IMP=0x0010000000103692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

