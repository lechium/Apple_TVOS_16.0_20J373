//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x0020000000029985
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002990a
@property(readonly) NSArray *sinfs;
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029718
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000002964a
- (void)dealloc;	// IMP=0x001000000002960f
- (id)initWithSINFs:(id)arg1;	// IMP=0x0010000000029550
- (id)init;	// IMP=0x001000000002953c

@end

