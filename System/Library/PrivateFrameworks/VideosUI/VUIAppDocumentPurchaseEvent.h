//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent
{
    NSString *_canonicalID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006926
@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (id)_purchaseEventDescriptor;	// IMP=0x00000000000068f2
- (id)dictionaryRepresentation;	// IMP=0x0000000000006812
- (id)initWithPurchaseEventDescriptor:(id)arg1;	// IMP=0x00000000000067e3
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000006774

@end

