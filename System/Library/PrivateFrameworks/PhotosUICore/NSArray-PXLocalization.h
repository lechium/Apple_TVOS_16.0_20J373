//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PXLocalization)
+ (id)px_integersFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x00800000007cac0c
+ (id)px_numbersFrom:(double)arg1 to:(double)arg2 increment:(double)arg3;	// IMP=0x00800000007cab49
- (id)px_localizedComposedStringThatFitsWidth:(double)arg1 maxCount:(unsigned long long)arg2 useUndefinedMoreCount:(_Bool)arg3 withMeasuringBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000205af4
- (id)px_localizedComposedStringThatFitsWidth:(double)arg1 withMeasuringBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000205ad6
- (id)px_localizedComposedStringWithCount:(unsigned long long)arg1 useUndefinedMoreCount:(_Bool)arg2;	// IMP=0x00100000002056ba
- (id)px_objectAfterObject:(id)arg1;	// IMP=0x00100000007caadd
- (void)px_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000007caa1b
- (id)px_subarrayAfterIndex:(unsigned long long)arg1;	// IMP=0x00100000007ca9ab
@end

