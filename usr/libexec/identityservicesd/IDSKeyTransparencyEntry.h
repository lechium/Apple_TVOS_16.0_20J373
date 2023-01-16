//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSKeyTransparencyEntry : NSObject
{
    _Bool _ktCapable;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
    NSData *_loggableData;	// 24 = 0x18
    NSData *_signedData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000723350
@property _Bool ktCapable; // @synthesize ktCapable=_ktCapable;
@property(readonly, nonatomic) NSData *signedData; // @synthesize signedData=_signedData;
@property(readonly, nonatomic) NSData *loggableData; // @synthesize loggableData=_loggableData;
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)description;	// IMP=0x0010000000723120
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000723100
- (unsigned long long)hash;	// IMP=0x0010000000723020
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000722f80
- (_Bool)isEqualToKeyTransparencyEntry:(id)arg1;	// IMP=0x0010000000722a90
- (id)initWithPushToken:(id)arg1 loggableData:(id)arg2 signedData:(id)arg3;	// IMP=0x0010000000722960

@end

