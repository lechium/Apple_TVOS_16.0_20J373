//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject
{
    NSIndexPath *_indexPath;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    _Bool _isClone;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;	// IMP=0x0010000000363020
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x0010000000362fbf
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x0010000000362f5e
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;	// IMP=0x0010000000362f1f
- (void).cxx_destruct;	// IMP=0x000000000036367a
@property(readonly, nonatomic) _Bool isClone; // @synthesize isClone=_isClone;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (unsigned long long)hash;	// IMP=0x000000000036363d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036358a
- (id)copyAsClone:(_Bool)arg1;	// IMP=0x00000000003634af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003634a4
- (id)description;	// IMP=0x00000000003631bb
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(_Bool)arg4;	// IMP=0x0000000000363128
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000363113

@end

