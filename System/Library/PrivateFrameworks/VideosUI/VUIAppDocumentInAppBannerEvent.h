//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent
{
    NSString *_targetId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006bc2f
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (id)description;	// IMP=0x000000000006bac7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b969
- (unsigned long long)hash;	// IMP=0x000000000006b913
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b908
- (id)dictionaryRepresentation;	// IMP=0x000000000006b85c
- (id)initWithDescriptor:(id)arg1;	// IMP=0x000000000006b7ed
- (id)initWithTargetId:(id)arg1;	// IMP=0x000000000006b72d

@end

