//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PurchaseHistoryItemsDAAPRequestEncoder : NSObject
{
    NSArray *_knownApps;	// 8 = 0x8
    NSNumber *_revision;	// 16 = 0x10
}

+ (id)_requiredFields;	// IMP=0x0020000000056b94
+ (id)_dataForRequestWithKnownApps:(id)arg1 revision:(unsigned int)arg2;	// IMP=0x00100000000566b3
- (void).cxx_destruct;	// IMP=0x0020000000056ba1
- (id)dataForRequestWithError:(id *)arg1;	// IMP=0x0010000000056670
- (id)initWithKnownApps:(id)arg1 currentRevision:(id)arg2;	// IMP=0x00100000000565d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

