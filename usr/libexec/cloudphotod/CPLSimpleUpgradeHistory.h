//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CPLSimpleUpgradeHistory : NSObject
{
    NSMutableDictionary *_history;	// 8 = 0x8
    _Bool _versionHasChanged;	// 16 = 0x10
    NSString *_libraryIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006a507
- (_Bool)versionHasChanged;	// IMP=0x001000000006a4fe
@property(readonly, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, nonatomic) NSString *status;
- (void)resetVersionHasChanged;	// IMP=0x001000000006a176
@property(readonly, nonatomic) NSDate *lastCPLUpgradeDate;
@property(readonly, nonatomic) NSString *previousCPLVersion;
@property(readonly, nonatomic) NSString *lastSeenCPLVersion;
@property(readonly, nonatomic) NSDate *lastDBUpgradeDate;
@property(readonly, nonatomic) long long previousDBVersion;
@property(readonly, nonatomic) long long lastSeenDBVersion;
@property(readonly, nonatomic) NSDate *lastOSBuildUpgradeDate;
@property(readonly, nonatomic) NSString *previousOSBuildVersion;
@property(readonly, nonatomic) NSString *lastSeenOSBuildVersion;
- (void)noteDatabaseWasUpgradedToVersion:(long long)arg1 fromVersion:(long long)arg2;	// IMP=0x0010000000069e25
- (id)_valueForKey:(id)arg1 class:(Class)arg2;	// IMP=0x0010000000069dca
- (id)initWithLibraryIdentifier:(id)arg1;	// IMP=0x001000000006944c
- (void)_save;	// IMP=0x0010000000069328
- (id)_defaultsKey;	// IMP=0x001000000006930b

@end
