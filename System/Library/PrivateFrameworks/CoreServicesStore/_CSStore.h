//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CSStore : NSObject
{
    struct Store _store;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 328 = 0x148
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000019291
+ (id)new;	// IMP=0x0010000000019288
+ (void)initialize;	// IMP=0x00100000000191f6
- (id).cxx_construct;	// IMP=0x0000000000018fba
- (void).cxx_destruct;	// IMP=0x0000000000018fab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018c46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018a06
- (id)description;	// IMP=0x000000000001893a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;	// IMP=0x0000000000018659
- (void)setExpectedAccessQueue:(id)arg1;	// IMP=0x000000000001860b
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001782f
- (id)initWithError:(id *)arg1;	// IMP=0x0000000000017749
- (id)initByMovingStore:(void *)arg1;	// IMP=0x000000000001767e
- (id)init;	// IMP=0x0000000000017659

@end

