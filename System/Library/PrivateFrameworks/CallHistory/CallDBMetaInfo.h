//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CallDBMetaInfo : NSObject
{
    NSURL *_dbInfoPrefFile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d85d
@property(retain) NSURL *dbInfoPrefFile; // @synthesize dbInfoPrefFile=_dbInfoPrefFile;
- (_Bool)validateInfo:(_Bool)arg1;	// IMP=0x000000000000d715
- (void)writeDatabaseVersion:(long long)arg1 isTemp:(_Bool)arg2;	// IMP=0x000000000000d576
- (long long)readDatabaseVersion:(_Bool)arg1;	// IMP=0x000000000000d493
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000d411

@end

