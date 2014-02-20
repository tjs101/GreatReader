//
//  NSFileManager+GreatReaderAdditions.h
//  GreatReader
//
//  Created by MIYAMOTO Shohei on 2014/02/10.
//  Copyright (c) 2014 MIYAMOTO Shohei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (GreatReaderAdditions)
+ (NSString *)grt_privateDocumentsPath;
- (void)grt_createPrivateDocumentsDirectory;
@end