//
//  CacheManager.h
//  Unity-iPhone
//
//  Created by Kerstin Blumenstein on 18.05.18.
//

#import <Foundation/Foundation.h>

@interface CacheManager : NSObject

@property (nonatomic, strong) NSString *data;

+ (instancetype)sharedManager;

@end
