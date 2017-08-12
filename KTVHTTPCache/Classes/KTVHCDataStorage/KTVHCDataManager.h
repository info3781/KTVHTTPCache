//
//  KTVHCDataManager.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/11.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KTVHCDataRequest.h"
#import "KTVHCDataReader.h"

@interface KTVHCDataManager : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)manager;

- (KTVHCDataReader *)readerSyncWithRequest:(KTVHCDataRequest *)request;
- (void)readerAsyncWithRequest:(KTVHCDataRequest *)request
             completionHandler:(void(^)(KTVHCDataReader *))completionHandler;

@end
