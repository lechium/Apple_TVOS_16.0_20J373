//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryDPAPStateOperation : TVHKAsynchronousOperation
{
    _Bool _importingDatabase;	// 8 = 0x8
    unsigned int _databaseID;	// 12 = 0xc
    unsigned int _basePlaylistID;	// 16 = 0x10
    unsigned long long _databasePersistentID;	// 24 = 0x18
    unsigned long long _basePlaylistPersistentID;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSOperation *_currentSubOperation;	// 48 = 0x30
    TVHKMediaLibrarySessionState *_sessionState;	// 56 = 0x38
    TVHKMediaLibraryRequestSession *_requestSession;	// 64 = 0x40
}

+ (id)new;	// IMP=0x00600000000327ee
- (void).cxx_destruct;	// IMP=0x000000000003312e
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isImportingDatabase) _Bool importingDatabase; // @synthesize importingDatabase=_importingDatabase;
@property(nonatomic) unsigned long long basePlaylistPersistentID; // @synthesize basePlaylistPersistentID=_basePlaylistPersistentID;
@property(nonatomic) unsigned int basePlaylistID; // @synthesize basePlaylistID=_basePlaylistID;
@property(nonatomic) unsigned long long databasePersistentID; // @synthesize databasePersistentID=_databasePersistentID;
@property(nonatomic) unsigned int databaseID; // @synthesize databaseID=_databaseID;
- (void)_startSubOperation:(id)arg1;	// IMP=0x0000000000032faa
- (void)_startBasePlaylistOperation;	// IMP=0x0000000000032ccc
- (void)_startDatabasesOperation;	// IMP=0x00000000000329ff
- (void)cancel;	// IMP=0x0000000000032981
- (void)executionDidBegin;	// IMP=0x000000000003296f
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000003288c
- (id)init;	// IMP=0x000000000003281d

@end

