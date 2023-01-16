//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject
{
    _Bool _compilation;	// 8 = 0x8
    long long _albumArtistPersistentID;	// 16 = 0x10
    NSData *_groupingKey;	// 24 = 0x18
    NSString *_feedURL;	// 32 = 0x20
    long long _seasonNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014a992
@property(readonly, nonatomic) _Bool compilation; // @synthesize compilation=_compilation;
@property(readonly, nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSData *groupingKey; // @synthesize groupingKey=_groupingKey;
@property(readonly, nonatomic) long long albumArtistPersistentID; // @synthesize albumArtistPersistentID=_albumArtistPersistentID;
@property(readonly, nonatomic) NSData *keyValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014a815
- (unsigned long long)hash;	// IMP=0x000000000014a7b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014a611
- (id)description;	// IMP=0x000000000014a55a
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(_Bool)arg5;	// IMP=0x000000000014a483

@end

