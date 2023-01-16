//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBFilteredDisplayListContents : NSObject
{
    struct objc_ptr<id<RBDisplayListContents>> _base;	// 8 = 0x8
    struct Invertible _predicate;	// 16 = 0x10
}

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001d42c
- (id).cxx_construct;	// IMP=0x000000000001d4d4
- (void).cxx_destruct;	// IMP=0x000000000001d47b
- (const void *)_rbXmlDocument;	// IMP=0x000000000001d465
- (const void *)_rbPredicate;	// IMP=0x000000000001d45b
- (const void *)_rbContents;	// IMP=0x000000000001d445
- (id)encodedDataForDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d3e0
@property(readonly, copy, nonatomic) NSString *xmlDescription;
- (void)renderInContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x000000000001d376
- (void)drawInState:(struct _RBDrawingState *)arg1;	// IMP=0x000000000001d2bf
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

