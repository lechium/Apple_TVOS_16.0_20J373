//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICSDKCreateContainerRequest
{
    NSString *_requestingBundleID;	// 8 = 0x8
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 requestingBundleID:(id)arg5;	// IMP=0x00400000000cc205
- (void).cxx_destruct;	// IMP=0x00200000000cc1f2
- (id)initWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 requestingBundleID:(id)arg5;	// IMP=0x00100000000cc165

@end

