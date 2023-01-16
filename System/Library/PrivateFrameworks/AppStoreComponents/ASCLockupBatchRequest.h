//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupBatchRequest : NSObject
{
    NSSet *_ids;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001bfce
+ (id)lockupBatchRequestsFromRequests:(id)arg1;	// IMP=0x001000000001b847
- (void).cxx_destruct;	// IMP=0x000000000001cc6d
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
- (id)lockupBatchRequestWithIDs:(id)arg1;	// IMP=0x000000000001cb66
@property(readonly, copy, nonatomic) NSArray *requests;
- (id)description;	// IMP=0x000000000001c737
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c42e
- (unsigned long long)hash;	// IMP=0x000000000001c318
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c30d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c1f5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bfd6
- (id)_initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;	// IMP=0x000000000001bf58
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x000000000001be72

@end

