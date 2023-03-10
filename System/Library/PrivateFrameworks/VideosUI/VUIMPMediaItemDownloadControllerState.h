//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadControllerState : NSObject
{
    _Bool _downloadSucceeded;	// 8 = 0x8
    _Bool _downloadInProgress;	// 9 = 0x9
    unsigned long long _status;	// 16 = 0x10
    double _downloadProgress;	// 24 = 0x18
    unsigned long long _bytesToDownload;	// 32 = 0x20
    unsigned long long _bytesDownloaded;	// 40 = 0x28
}

@property(nonatomic, getter=isDownloadInProgress) _Bool downloadInProgress; // @synthesize downloadInProgress=_downloadInProgress;
@property(nonatomic) _Bool downloadSucceeded; // @synthesize downloadSucceeded=_downloadSucceeded;
@property(nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(nonatomic) unsigned long long bytesToDownload; // @synthesize bytesToDownload=_bytesToDownload;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;	// IMP=0x00000000001bd9b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bd84d
- (unsigned long long)hash;	// IMP=0x00000000001bd79a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bd756
- (id)init;	// IMP=0x00000000001bd6f2

@end

