//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBOverlayLayoutOffsetList : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    double *_storage;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000008047d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000008042c
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000803ff
- (id)succinctDescription;	// IMP=0x00100000000803ae
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_maintainSortFromIndex:(unsigned long long)arg1;	// IMP=0x001000000008033c
- (_Bool)getValues:(double *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0010000000080307
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000802a0
- (void)addValue:(double)arg1;	// IMP=0x00100000000801e4
- (void)dealloc;	// IMP=0x001000000008019d
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0010000000080112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

